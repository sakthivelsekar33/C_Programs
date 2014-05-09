#include<stdio.h>


void move_ship_south(int lat, int lon){
	lat = lat - 1;
	lon = lon + 1;
}

int main(){
	int latitude, longitude;
	latitude = 10;
	longitude = -30;
	move_ship_south(latitude, longitude);
	printf("Latitude : Longitude : [%i, %i]\n", latitude, longitude);
	return 0;
}

