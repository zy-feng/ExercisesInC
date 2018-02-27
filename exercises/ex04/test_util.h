#include <stdio.h>
#include "trout/util.h"
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
    if (rst != NULL) {
      printf("%s\n", rst);
      return -1;
    }
    else printf("All tests passed\n");
    return 0;
}
