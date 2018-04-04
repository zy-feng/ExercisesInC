#include <stdio.h>
#include <glib.h>

void dothing(gpointer k, gpointer v, gpointer dotdot) {
	printf(dotdot, k, v);
}

int main(int argc, char** argv){
	if (argc != 2) {
		fprintf(stderr, "Usage: word_count test.txt\n");
		return -1;
	}
	FILE *file = fopen(argv[1], "r");
	GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal);
	gchar s[1024];
	while (fscanf(file,"%1023s",s)!= EOF) {
		if (g_hash_table_contains(hash, s)) g_hash_table_replace(hash, g_strdup(s), (gpointer)((((gint64)g_hash_table_lookup(hash, s))+1)));
		else g_hash_table_insert(hash, g_strdup(s), (gpointer)1);
	}
	printf("word count list\n =============\n");
	g_hash_table_foreach(hash, (GHFunc)dothing, "%s. %d\n");
	g_hash_table_destroy(hash);
	fclose(file);

}
