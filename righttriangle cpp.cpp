#pragma once
#include "righttriangle .h"

   
righttriangle::righttriangle(int a, int b, int c, int A, int B, int C) {
    try {
        if (C != 90) {
            throw MyEx("угол C не равен 90 градусов\n");

    }
        if (C + B + A != 180) {
            throw MyEx("сумма углов не равна 180 градусов\n");
        }
        this->countsides = 3;
        this->name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->angle1 = A;
        this->angle2 = B;
        this->angle3 = C;
        this->print_info();
        }
    catch (const MyEx& e) {
        std::cerr << "Ошибка создания прямоугольного треугольника: " << e.what() << std::endl;
        }
        
       



    }
    void righttriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string righttriangle::getname() {
        return this->name;
    }
    int righttriangle::countSides() {
        return this->countsides;
    }
    int righttriangle::ReturnA() {
        return a;

    };
    int righttriangle::Returnb() {
        return b;

    };
    int righttriangle::Returnc() {
        return c;

    };
    int righttriangle::Returnangle1() {
        return angle1;

    };
    int righttriangle::Returnangle2() {
        return angle2;

    };
    int righttriangle::Returnangle3() {
        return angle3;

    }
