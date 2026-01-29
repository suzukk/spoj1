#include<stdio.h>

int main(){
	int a, b, c, sum=0;
	scanf("%d %d %d", &a, &b, &c);
	if(a%2==0) sum +=a;
	if(b%2==0) sum +=b;
	if(c%2==0) sum +=c;
	printf("%d",sum);
}