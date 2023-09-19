#pragma once
class ObjectsPoints
{
protected:
	double valueX;
	double valueY;
	double valueZ;
public:
    ObjectsPoints(double, double, double);
    ObjectsPoints();
    void setValueX(double);
    void setValueY(double);
    void setValueZ(double);
    double getValueX();
    double getValueY();
    double getValueZ();
};