#include<stdio.h>

int main(){
	int a, b, c, d, sum=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a % 11 != 0) sum += a;
	if(b % 11 != 0) sum += b;
	if(c % 11 != 0) sum += c;
	if(d % 11 != 0) sum += d;
	printf("%d", sum);
}