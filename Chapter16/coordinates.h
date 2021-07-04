//
// Created by Peixiao on 2021/7/5.
//

#ifndef CHAPTER16_COORDINATES_H
#define CHAPTER16_COORDINATES_H

typedef struct polar {
    double angle;
    double magnitude;
} Polar;

typedef struct cartesian {
    double x;
    double y;
} Cartesian;

Cartesian cartesianFromPolar(Polar coords);

#endif //CHAPTER16_COORDINATES_H
