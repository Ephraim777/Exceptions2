#pragma once
#include "rectangle.h"

    rectangle::rectangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        try {
            if (a != c) {
                throw MyEx("строна a не равна стороне c");

            }
            if (b != d) {
                throw MyEx("строна b не равна стороне d");

            }
            if (A != 90 || B!= 90 || C!= 90 || D != 90) {
                throw MyEx("все углы должны быть 90 градусов\n");

            }
            if (a + c == d + b) {
                throw MyEx("ошибка стороны a и c не должны быть равны d и b\n");
            }
            this->name = "Прямоугольник";
            this->countsides = 4;
            this->a = a;
            this->c = c;
            this->b = b;
            this->d = d;
            this->angle1 = A;
            this->angle2 = B;
            this->angle3 = C;
            this->angle4 = D;
            this->print_info();
        }
            
        catch (const MyEx& e) {
            std::cerr << "Ошибка создания прямоугольника: " << e.what() << std::endl;
        }
        
    }
    std::string rectangle::getname() {
        return this->name;
    }
    int rectangle::countSides() {
        return this->countsides;
    }
    int rectangle::ReturnA() {
        return a;

    };
    int rectangle::Returnb() {
        return b;

    };
    int rectangle::Returnc() {
        return c;

    };
    int rectangle::Returnd() {
        return d;

    };
    int rectangle::Returnangle1() {
        return angle1;

    };
    int rectangle::Returnangle2() {
        return angle2;

    };
    int rectangle::Returnangle3() {
        return angle3;

    };
    int rectangle::Returnangle4() {
        return angle4;

    };

    void rectangle::print_info() {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }
