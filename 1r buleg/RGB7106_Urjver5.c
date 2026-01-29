#include<stdio.h>

int main(){
	int a, b, c, d, mult=1;
	scanf("%d %d %d %d",&a, &b, &c, &d);
	if(a<5) mult *= a;
	if(b<5) mult *= b;
	if(c<5) mult *= c;
	if(d<5) mult *= d;
	printf("%d", mult);

}