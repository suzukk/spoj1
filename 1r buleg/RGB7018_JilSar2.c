#include<stdio.h>

int main(){
	int year, month;
	scanf("%d %d", &year, &month);
	printf("%d", month=(year*12)+month);
}