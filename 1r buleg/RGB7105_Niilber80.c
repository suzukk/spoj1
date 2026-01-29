#include<stdio.h>

int main(){
	int a, b, c, d;
	int sum = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a>80)sum+=a;
	if(b>80)sum+=b;
	if(c>80)sum+=c;
	if(d>80)sum+=d;
	printf("%d",sum);
}