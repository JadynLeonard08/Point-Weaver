/*

* Author: Jadyn Leonard

* Assignment Title: Programming Assignment 21

* Assignment Description: Example

* Due Date: 11/04/2026

* Date Created: 11/04/2026

* Date Last Modified: 11/04/2026

*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

struct Point
{
    double x, y;
    
    // description: initializes a Point object with 
    //x and y coordinates
    // return: none
    // precondition: parameters are valid double values
    // postcondition: a Point object is created with the 
    //given or default (0,0) values
    Point(double = 0, double = 0);
    // description: displays the Point object in the 
    //format (x, y)
    // return: void
    // precondition: output stream is valid and open
    // postcondition: the point coordinates are written to 
    //the output stream
    void display(ostream&) const;
    // description: calculates the distance between two points
    // return: double
    // precondition: the parameter point is a valid, 
    //initialized Point object
    // postcondition: returns the calculated distance 
    //value as a double
    double distance(const Point&) const;
    // description: calculates the midpoint between two points 
    //and rounds to the nearest integer
    // return: Point
    // precondition: the parameter point is a valid, initialized 
    //Point object
    // postcondition: returns a new Point object with rounded 
    //integer coordinates representing the midpoint
    Point midPoint(const Point&) const;
};

#endif