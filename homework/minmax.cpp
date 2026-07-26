#include <stdio.h>

int main(){
	int a, b, c, d;
	int mina, minb, maxa, maxb, largest, lowest;
	
	printf("Enter four integers : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a > b){
		maxa = a;
		mina = b;
	} else {
		maxa = b;
		mina = a;
	}
	
	if(c > d){
		maxb = c;
		minb = d;
	} else {
		maxb = d;
		minb = c;
	}
	
	if (maxa > maxb){
		largest = maxa;
	} else {
		largest = maxb;
	}
	
	if (mina < minb) {
		lowest = mina;
	} else {
		lowest = minb;
	}
	
	printf("MAX IS %d, MIN IS %d", largest, lowest);
	return 0;
}
