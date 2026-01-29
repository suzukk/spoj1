#include<stdio.h>

int main(){
	int month;
	scanf("%d", &month);
	int year = month/12;
	printf("%d %d", year, month%12);
}