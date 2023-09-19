#ifndef POINT_H
#define POINT_H

class Point{
    private:
     double x;
     double y;

    public:
    Point(double, double);
    Point();
    void setX(double);
    void setY(double);
    double getX();
    double getY();
    double distance(Point);  

};

#endif