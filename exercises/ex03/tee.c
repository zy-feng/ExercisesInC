#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 256 

int main(int argc, char** argv)
{
	char c;
	char in[MAX];
	FILE *out;
	int flag = 0;
	int i;
	while((c = getopt(argc, argv, "a"))!=EOF) {
		if ('a' == c) flag = 1; else {
			fprintf(stderr, "Invalid Argument");
			exit(1);
		}
	}
	while (fgets(in, MAX, stdin)){
		for (i = 0; i < argc-optind; i++){
			if (!flag) out = fopen(argv[i+optind], "w");
			else out = fopen(argv[i+optind], "a");
			fputs(in,out);
			fclose(out);
		}
		fprintf(stdout, "%s", in);
	}
}
