#include<stdio.h>
 
int main(){
	int hour, min, sec;
	scanf("%d %d %d", &hour, &min, &sec);
	printf("%d", sec=(hour*3600)+(min*60)+sec);
}