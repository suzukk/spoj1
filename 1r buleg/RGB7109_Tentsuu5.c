#include<stdio.h>

int main(){
	int a, b, c, counter=0;
	scanf("%d %d %d", &a, &b, &c);
	if(a==5) counter++;
	if(b==5) counter++;
	if(c==5) counter++;
	printf("%d", counter);
}