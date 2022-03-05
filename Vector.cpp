#include "Vector.h"
VMath::Vector& operator+(const VMath::Vector& v1, const VMath::Vector& v2){
    VMath::Vector vec(v1.x + v2.x, v1.y + v2.y);
    return vec;
}
VMath::Vector& operator-(const VMath::Vector& v1, const VMath::Vector& v2){
    VMath::Vector vec(v1.x - v2.x, v1.y - v2.y);
    return vec;
}

VMath::Vector& operator+=(VMath::Vector& v1, const VMath::Vector& v2){
    v1.x += v2.x;
    v1.y += v2.x;
    return v1;
}

VMath::Vector& operator-=(VMath::Vector& v1, const VMath::Vector& v2){
    v1.x -= v2.x;
    v1.y -= v2.x;
    return v1;
}