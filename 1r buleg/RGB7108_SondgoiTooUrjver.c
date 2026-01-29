#include<stdio.h>

int main(){
	int a, b, c, mult=1;
	scanf("%d %d %d", &a, &b, &c);
	if(a%2==1) mult *= a;
	if(b%2==1) mult *= b;
	if(c%2==1) mult *= c;
	printf("%d", mult);
}