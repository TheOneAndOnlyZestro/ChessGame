#include "Vector.h"
const Vector& operator+(const Vector& v1, const Vector& v2){
    return Vector(v1.x + v2.x, v1.y + v2.y);
}
const Vector& operator-(const Vector& v1, const Vector& v2){
    return Vector(v1.x - v2.x, v1.y - v2.y);
}