#include "Vector.h"
const VMath::Vector& operator+(const VMath::Vector& v1, const VMath::Vector& v2){
    return VMath::Vector(v1.x + v2.x, v1.y + v2.y);
}
const VMath::Vector& operator-(const VMath::Vector& v1, const VMath::Vector& v2){
    return VMath::Vector(v1.x - v2.x, v1.y - v2.y);
}