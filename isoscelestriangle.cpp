#pragma once
#include "isoscelestriangle.h"


isoscelestriangle::isoscelestriangle(int a, int b, int c, int A, int B, int C) {
    try {
        if (A + B + C != 180) {
            throw MyEx("cумма углов не равна 180\n");
        }
        if (A != C) {
            throw MyEx("угол А не равен углу С\n");
        }
        if (a != c) {
            throw MyEx("сторона а не равна стороне c\n");
        }
        this->countsides = 3;
        this->name = "Равнобедренный треугольник";
        this->a = a;
        this->c = c;
        this->angle1 = A;
        this->angle3 = C;
        this->b = b;
        this->angle2 = B;
        this->print_info();
    }
    catch (const MyEx& e) {
        std::cerr << "Ошибка создания равнобедренного треугольника: " << e.what() << std::endl;
        }
            
        
        
    }
    void isoscelestriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string isoscelestriangle::getname() {
        return this->name;
    }
    int isoscelestriangle::countSides() {
        return this->countsides;
    }
    int isoscelestriangle::ReturnA() {
        return a;

    };
    int isoscelestriangle::Returnb() {
        return b;

    };
    int isoscelestriangle::Returnc() {
        return c;


    }
    int isoscelestriangle::Returnangle1() {
        return angle1;

    };
    int isoscelestriangle::Returnangle2() {
        return angle2;

    };
    int isoscelestriangle::Returnangle3() {
        return angle3;

    }

