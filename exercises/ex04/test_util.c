#include <stdio.h>
#include "trout/util.c"
#include "minunit.h"

int tests_run = 0;

static char * test() {
	char *rst = icmpcode_v4(0);
	char *msg = "";
	mu_assert(msg, !strcmp(rst, "network unreachable"));
	return NULL;
}

static char* all_tests() {
    mu_run_test(test);
    return NULL;
}

int main() {
    char *rst = all_tests();
    if (rst != NULL) printf("%s\n", rst);
    else printf("ALL TESTS PASSED\n");
    printf("Tests run %d\n", tests_run);
    return 0;
}
