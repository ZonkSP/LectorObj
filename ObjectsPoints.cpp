#include "ObjectPoints.h"

ObjectsPoints::ObjectsPoints(double x, double y, double z) {
    this->valueX = x;
    this->valueY = y;
    this->valueZ = z;
}

ObjectsPoints::ObjectsPoints() {
    this->valueX = 0;
    this->valueY = 0;
    this->valueZ = 0;
}

void ObjectsPoints::setValueX(double x) {
    valueX = x;
}

void ObjectsPoints::setValueY(double y) {
    valueY = y;
}

void ObjectsPoints::setValueZ(double z) {
    valueZ = z;
}

double ObjectsPoints::getValueX() {
    return valueX;
}

double ObjectsPoints::getValueY() {
    return valueY;
}

double ObjectsPoints::getValueZ() {
    return valueZ;
}