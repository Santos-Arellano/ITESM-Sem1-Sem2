#include "point.h"
#include "triangle2.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(Point p1,Point p2, Point p3){
    vertex1 = p1;
    vertex2 = p2;
    vertex3 = p3;
}

double Triangle::perimeter(){
    double a = vertex1.distance(vertex2);
    double b = vertex2.distance(vertex3);
    double c = vertex3.distance(vertex1);
    return a+b+c;
}

double Triangle::area(){
    double a = vertex1.distance(vertex2);
    double b = vertex2.distance(vertex3);
    double c = vertex3.distance(vertex1);
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
