#pragma once
#include "quadrilateralr.h"

quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
    try {
        
        if (A + B + C + D != 360) {
            throw MyEx("Сумма углов должна быть 360 градусов\n");
        }
        this->name = "Четырёхугольник";
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

        std::cerr << "Ошибка создания четырёхугольника: " << e.what() << std::endl;
    }


}
std::string  quadrilateral::getname() {
    return this->name;
}
int  quadrilateral::countSides() {
    return this->countsides;
}
int  quadrilateral::ReturnA() {
    return a;

};
int  quadrilateral::Returnb() {
    return b;

};
int  quadrilateral::Returnc() {
    return c;

};
int  quadrilateral::Returnd() {
    return d;

};
int  quadrilateral::Returnangle1() {
    return angle1;

};
int  quadrilateral::Returnangle2() {
    return angle2;

};
int  quadrilateral::Returnangle3() {
    return angle3;

};
int  quadrilateral::Returnangle4() {
    return angle4;


};
void  quadrilateral::print_info() {
    std::cout << this->getname() << "\n";
    std::cout << "Количество сторон: " << this->countSides() << "\n";
    std::cout << "Стороны: " << "a = " << this->ReturnA()
        << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
    std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
    std::cout << std::endl;
}
