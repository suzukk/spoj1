#include<stdio.h>

int main(){
	int day, hour;
	scanf("%d %d", &day, &hour);
	printf("%d", hour=(day*24)+hour);
}