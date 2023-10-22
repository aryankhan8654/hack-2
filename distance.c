#include <stdio.h>
#include <math.h>

double degreesToRadians(double degrees)
{
    return degrees * 3.14 / 180.0;
}


do

    int main()
    {
        double lat1, lon1, lat2, lon2;

        printf("Enter the latitude and longitude of the first location (in degrees):\n");
        printf("Latitude 1 (-90 to 90): ");
        scanf("%lf", &lat1);
        printf("Longitude 1 (-180 to 180): ");
        scanf("%lf", &lon1);


        