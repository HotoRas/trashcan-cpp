#ifndef VECTORS_H
#define VECTORS_H 1
#include <cmath>

struct dVector2d {
    double x;
    double y;

    dVector2d(int a = 0, int b = 0) {
        x = a; y = b;
    }
    ~dVector2d() {}

    inline long double distance() {
        long double distPwr = 0;
        long double pwrX, pwrY;
        pwrX = (long)x ** 2;
        pwrY = (long)y ** 2;
        distPwr = pwrX + pwrY;
        return sqrt(distPwr);
    }
}