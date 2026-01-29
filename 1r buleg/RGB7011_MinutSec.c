#include<stdio.h>

int main(){
	int sec;
	scanf("%d", &sec);
	int min = sec/60;
	printf("%d %d", min,sec=sec%60);
}