#include "sensor.h"
#include <stdio.h>
void sensor_init(int ar){
	printf("sensor %d. pinden init edildi\n",ar);
}

long sensor_GetValue(void){
	int sayi=rand() % 20 + 10;
	
	return sayi;
}
