#pragma once
#include "equilateraltriangle.h"

equilateraltriangle::equilateraltriangle(int a,int b, int c, int A, int B, int C) {
    try {
        if (A != 60 ||  C !=  60 || B != 60) {
            throw MyEx("каждый угол должен быть по 60 градусов\n");
        }
        if (a != b || b != c || a!= c) {
            throw MyEx("все стороны должы быть равны\n");
        }
        
        this->countsides = 3;
        this->name = "Равносторонний треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->angle2 = B;
        this->angle3 = C;
        this->angle1 = A;
        this->print_info();
    }
    catch (MyEx& e) {
        std::cerr << "Ошибка создания равностороннего треугольника: " << e.what() << std::endl;
    }
        
        
    }
    void equilateraltriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string equilateraltriangle::getname() {
        return this->name;
    }
    int equilateraltriangle::countSides() {
        return this->countsides;
    }
    int equilateraltriangle::ReturnA() {
        return a;

    };
    int equilateraltriangle::Returnb() {
        return b;

    };
    int equilateraltriangle::Returnc() {
        return c;

    };
    int equilateraltriangle::Returnangle1() {
        return angle1;

    };
    int equilateraltriangle::Returnangle2() {
        return angle2;

    };
    int equilateraltriangle::Returnangle3() {
        return angle3;

    }

