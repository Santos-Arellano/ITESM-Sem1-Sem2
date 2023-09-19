#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point(double _x, double _y){
    x = _x;
    y = _y;
}
Point::Point(){
    
}
void Point::setX(double _x){
    x = _x;
}

void Point::setY(double _y){
    y = _y;
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

double Point::distance(Point p){
    return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
}