#include <stdio.h>

int main(){
	int temperature_readings[31][25];
	int sum, avr; 
	sum = 0;
	for(int i = 0; i < (sizeof(temperature_readings) / sizeof(temperature_readings[0])); i++){
		for(int j = 0; j < (sizeof(temperature_readings[0]) / sizeof(temperature_readings[0][0])); j++){
			sum += temperature_readings[i][j];
		}
	}
	avr = sum / (30 * 24);
	printf("%d", avr);
	return 0;
	
	
}
