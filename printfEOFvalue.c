#include <stdio.h>
int main(){
	int c;
	c = getchar();
	if(c == EOF)
		printf("%d", c);
	else
		return 0;
}

