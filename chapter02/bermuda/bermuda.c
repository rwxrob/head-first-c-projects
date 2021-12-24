#include <stdio.h>

/* WRONG!
void go_south_east(int lat, int lon)
{
        lat-=1;
        lon+=1;
        printf("lat: %i (%p) lon: %i (%p)\n", lat, &lat, lon, &lon);
}

int main()
{
      int lat = 0;
      int lon = 0;
      go_south_east(lat,lon);
      printf("latitude: %i (%p)\nlongitude: %i (%p)\n",
                      lat, &lat, lon, &lon);
      return 0;
}
*/

void go_south_east(int *lat, int *lon)
{
        *lat-=1;
        *lon+=1;
        printf("lat: %i (%p) lon: %i (%p)\n", *lat, lat, *lon, lon);
}

int main()
{
      int lat = 0;
      int lon = 0;
      go_south_east(&lat,&lon);
      printf("latitude: %i (%p)\nlongitude: %i (%p)\n",
                      lat, &lat, lon, &lon);
      return 0;
}
