#include <iostream>
#include <string>
#include "equilateraltriangle.h"
#include "isoscelestriangle.h"
#include "parallelogram.h"
#include "rect.h"
#include "rectangle.h"
#include "rhombus.h"
#include "righttriangle .h"
#include "triangle.h"
#include "quadrilateralr.h"


















int main() {

    shape* b = new triangle(10, 20, 30, 50, 60, 70);
    

    shape* c = new righttriangle(10, 20, 30, 50, 40,90);

    shape* d = new isoscelestriangle(10, 15,10, 50, 80,50);
    

    shape* e = new  equilateraltriangle(10,10,10,60,60,60);
  

    delete b;
    b = nullptr;
    delete c;
    c = nullptr;

    delete d;
    d = nullptr;
    delete e;
    d = nullptr;

    b = new rectangle(40,20,40,20,90,90,90,90);
    

    c = new rect(10,10,10,10,90,90,90,90);
   

    d = new parallelogram(20,10,20 ,10, 80, 100,80,100);
    

    e = new rhombus(10,10,10,10,20,10,20,10);
    
    shape* g = new quadrilateral(10,1,2,3,90,80,100,90);
    delete g;
    delete b;
    delete c;
    delete d;
    delete e;
    return 0;
}