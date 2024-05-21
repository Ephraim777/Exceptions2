#pragma once
#include "rect.h"

    rect::rect(int a, int b, int c, int d, int A, int B, int C, int D){
        try {
            if (a != b || b != c || c != d) {
                throw MyEx("все стороны квадрата должы быть равны\n");
            }
            if (A != 90 || B != 90 || C != 90 || D != 90) {
                throw MyEx("все углы квадрата должы быть 90 градусов\n");
            }
            this->name = "Квадрат";
            this->countsides = 4;
            this->b = b;
            this->a = a;
            this->c = c;
            this->d = d;
            this->angle4 = D;
            this->angle1 = A;
            this->angle2 = B;
            this->angle3 = C;
            this->print_info();
        }
        catch (const MyEx& e) {

            std::cerr << "Ошибка создания квадрата: " << e.what() << std::endl;
        }
            
        
    }
    std::string  rect::getname() {
        return this->name;
    }
    int  rect::countSides() {
        return this->countsides;
    }
    int  rect::ReturnA() {
        return a;

    };
    int  rect::Returnb() {
        return b;

    };
    int  rect::Returnc() {
        return c;

    };
    int  rect::Returnd() {
        return d;

    };
    int  rect::Returnangle1() {
        return angle1;

    };
    int  rect::Returnangle2() {
        return angle2;

    };
    int  rect::Returnangle3() {
        return angle3;

    };
    int  rect::Returnangle4() {
        return angle4;


    };
    void  rect::print_info() {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }
