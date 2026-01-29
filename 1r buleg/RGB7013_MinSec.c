#include<stdio.h>

int main(){
	int min, sec;
	scanf("%d %d", &min, &sec);
	printf("%d", sec=(min*60)+sec );
}