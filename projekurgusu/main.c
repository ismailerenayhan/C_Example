#include <stdio.h>
#include <stdlib.h>
#include "ekran.h"
#include "servo.h"
#include "sensor.h"
void delay(long del);
/*
	1 ekran, 1 sens�r ve bir servo kontrol edilecek
	ekran i�in gerekli fonksiyonlar
	display_init()
	display_print(char *str)
	display_clear()
	servo i�in gerekli fonksiyonlar
	servo_init(int)
	servo_write(int)
	sens�rde bi haberle�me protokol� ile haberle�iyor olsun
	sensor_init()
	long sensor_GetValue()
*/

int main(int argc, char *argv[]) {
	
	
	display_init();
	delay(500);
	servo_init(8);
	delay(500);
	sensor_init(4);
	delay(500);
	
	int oku;
	
	
	while(1){
	display_print("calisiyor\n");
	delay(500);
	display_clear();
	delay(500);
	oku = sensor_GetValue();
	printf("%d\n",oku);
	delay(500);
	}
	
	return 0;
	
}
void delay(long del){
	del=del*32.767;
	long a;
	long b;
	for(a=0;a<del;a++){
		for(b=0;b<del;b++){}
	}
	
}
