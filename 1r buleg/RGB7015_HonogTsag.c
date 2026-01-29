#include<stdio.h>

int main(){
	int hour;
	scanf("%d", &hour);
	int day = hour/24;
	printf("%d %d", day, hour=hour%24);
}