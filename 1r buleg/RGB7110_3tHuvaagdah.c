#include<stdio.h>

int main(){
	int a, b, c, d, counter=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a%3==0) counter++;
	if(b%3==0) counter++;
	if(c%3==0) counter++;
	if(d%3==0) counter++;
	printf("%d",counter);
}