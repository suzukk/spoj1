#include<stdio.h>

int main(){
	int sec;
	scanf("%d", &sec);
	int hour = sec/3600;
	int min = (sec%3600)/60;
	printf("%d %d %d", hour, min, sec=sec%60);
}