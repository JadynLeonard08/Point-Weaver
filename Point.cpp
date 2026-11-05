/*

* Author: Jadyn Leonard

* Assignment Title: Programming Assignment 21

* Assignment Description: Example

* Due Date: 11/04/2026

* Date Created: 11/04/2026

* Date Last Modified: 11/04/2026

*/

 

#include "Point.h"
#include <cmath>

    Point::Point(double x, double y):x(x), y(y){
        
    }
    
    void Point::display(ostream& out) const{
        out << "(" << x << ", " << y << ")";
    }
    double Point::distance(const Point& p) const{
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
    Point Point::midPoint(const Point& p) const{
        double midX;
        double midY;
        
        midX = round((p.x + x) / 2.0);
        midY = round((p.y + y) / 2.0);
        
        return Point(midX, midY);
    }