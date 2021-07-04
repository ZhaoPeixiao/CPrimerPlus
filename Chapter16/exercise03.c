//
// Created by Peixiao on 2021/7/5.
//

#include <stdio.h>
#include "exercise01.h"
#include "coordinates.h"

int main(void) {
    Polar polar_coords;
    Cartesian cartesian_coords;

    printf("Enter an angle: ");
    while (scanf("%lf", &polar_coords.angle) == 1) {
        CLEARINPUT;
        printf("Enter a magnitude: ");
        while (scanf("%lf", &polar_coords.magnitude) != 1) {
            CLEARINPUT;
            printf("Enter a magnitude: ");
        }

        cartesian_coords = cartesianFromPolar(polar_coords);

        printf("angle: %.2f  magnitude: %.2f\n", polar_coords.angle,
               polar_coords.magnitude);
        printf("x: %.2f  y: %.2f\n", cartesian_coords.x, cartesian_coords.y);

        printf("Enter an angle: ");
    }
    puts("Bye.");

    return 0;
}