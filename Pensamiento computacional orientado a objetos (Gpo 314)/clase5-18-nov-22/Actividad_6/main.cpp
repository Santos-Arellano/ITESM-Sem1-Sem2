#include <iostream>
#include "point.h"
#include "triangle2.h"
#include "point.cpp"
#include "triangle.cpp"
using namespace std;

int main(){
    Point p1(0.0,0.0);
    Point p2(50,30);
    Point p3(25,10);
    Triangle t(p1,p2,p3);
    cout << "Perimetro: " << t.perimeter() << endl;
    cout << "Area: " << t.area() << endl;
    return 0;
}