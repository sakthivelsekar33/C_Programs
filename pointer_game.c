#include<stdio.h>


void move_ship_south(int *lat_pointer, int *lon_pointer){
	*lat_pointer = *lat_pointer - 1;
	*lon_pointer = *lon_pointer + 1;
}

int main(){
	int latitude, longitude;
	latitude = 10;
	longitude = -30;

	int *latitude_pointer = &latitude;
	int *longitude_pointer = &longitude;

	move_ship_south(&latitude, &longitude);
	printf("Latitude : Longitude : [%i, %i]\n", latitude, longitude);
	return 0;
}

