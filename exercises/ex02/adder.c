#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
int parse(char* s)
{
	int res = atoi(s);
	if (res == 0){
		fprintf(stderr,"Not valid!");
	} else if (strlen(s)>MAX) {
		fprintf(stderr,"Too long input!");
	} else {
		return res;
	}
	return -1;
}

int main()
{
	char n[MAX];
	int k[MAX], c = 0;
	while (scanf("%10s", n) != EOF) {
		if (c<MAX) {
			if (parse(n)!=-1){
				k[c++] = parse(n);	
			}
		} else {
			fprintf(stderr,"It's time to stop!");
		}
	}
	c=0;
	for (int i = 0;i<MAX;i++){
		c+=k[i];
	}
	printf("\n%d\n", c);
}
