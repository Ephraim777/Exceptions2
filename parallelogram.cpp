#pragma once
#include "parallelogram.h"

parallelogram::parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
    try {

        if (a != c) {
            throw MyEx("строна a не равна стороне c");

        }
        if (b != d) {
            throw MyEx("строна b не равна стороне d");

        }
        if (A != C) {
            throw MyEx("угол A не равен углу C\n");

        }
        if (B != D) {
            throw MyEx("угол B не равен углу D\n");

        }
        if (a + c == d + b) {
            throw MyEx("ошибка стороны a и c не должны быть равны d и b\n");
        }
        if (A + C == D + B) {
            throw MyEx("ошибка углы A и C не должны быть равны D и B\n");
        }
        if (A + C + D + B != 360) {
            throw MyEx("сумма всех углов должна быть 360\n");
        }
        this->countsides = 4;
        this->a = a;
        this->c = c;
        this->b = b;
        this->d = d;
        this->angle1 = A;
        this->angle3 = C;
        this->angle2 = B;
        this->angle4 = D;
        this->name = "Параллелограмм";
        this->print_info();
        }
    catch (MyEx& e) {
        std::cerr << "Ошибка создания параллелограмма: " << e.what() << std::endl;
    }
           
        
       

    }std::string parallelogram::getname() {
        return this->name;
    }
    int parallelogram::countSides() {
        return this->countsides;
    }
    int parallelogram::ReturnA() {
        return a;

    };
    int parallelogram::Returnb() {
        return b;

    };
    int parallelogram::Returnc() {
        return c;

    };
    int parallelogram::Returnd() {
        return d;

    };
    int parallelogram::Returnangle1() {
        return angle1;

    };
    int parallelogram::Returnangle2() {
        return angle2;

    };
    int parallelogram::Returnangle3() {
        return angle3;

    };
    int parallelogram::Returnangle4() {
        return angle4;

    };
    void parallelogram::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }

