#pragma once
#include "rhombus.h"

rhombus::rhombus(int a, int b, int c, int d, int A, int B, int C, int D)
    {
    try {
        if (A != C) {
            throw MyEx("угол A не равен углу C\n");

        }
        if (B != D) {
            throw MyEx("угол B не равен углу D\n");
        }
        if (A + C == D + B) {
            throw MyEx("ошибка углы A и C не должны быть равны D и B\n");
        }
        if (a != b || b != c || c != d) {
            throw MyEx("все стороны ромба должы быть равны\n");
        }
        this->countsides = 4;
        this->name = "Ромб";
        this->a = a;
        this->c = c;
        this->b = b;
        this->d = d;
        this->angle1 = A;
        this->angle3 = C;
        this->angle2 = B;
        this->angle4 = D; 
        this->print_info();

    }
    catch (MyEx& e) {
        std::cerr << "Ошибка создания ромба: " << e.what() << std::endl;
    }
        
        
    }
    std::string rhombus::getname() {
        return this->name;
    }
    int rhombus::countSides() {
        return this->countsides;
    }
    int rhombus::ReturnA() {
        return a;

    };
    int rhombus::Returnb() {
        return b;

    };
    int rhombus::Returnc() {
        return c;

    };
    int rhombus::Returnd() {
        return d;

    };
    int rhombus::Returnangle1() {
        return angle1;

    };
    int rhombus::Returnangle2() {
        return angle2;

    };
    int rhombus::Returnangle3() {
        return angle3;

    };
    int rhombus::Returnangle4() {
        return angle4;

    };
    void rhombus::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }

