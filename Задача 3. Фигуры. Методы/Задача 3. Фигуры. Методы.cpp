#include <iostream>
#include <string>
using namespace std;

class Figure {
protected:
    string ShapeName; string Accuracy; int number_of_sides;
public:
    Figure(){
        ShapeName = "Фигура"; number_of_sides = 0;
        if (number_of_sides == 0) {  Accuracy = "Правильная"; }
        else Accuracy = "Неправильная"; number_of_sides = 0; }

    virtual void print_info() {        
        cout << "" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides << endl;
    }
};
class Triangle : public Figure{
protected:
    int a, b, c, A, B, C;
public:
    Triangle() {
        ShapeName = "Треугольник"; number_of_sides = 3, a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
        if (180 == A + B + C) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная";
        number_of_sides = 3, a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
    }

    void print_info () override{
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            <<  "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class A_right_angled_triangle : public Triangle {
public:
    A_right_angled_triangle() {
        ShapeName = "Прямоугольный треугольник"; number_of_sides = 3, a = 10, b = 20, c = 30, A = 50, B = 60, C = 90;
        if (90 == C) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная"; number_of_sides = 3, a = 10, b = 20, c = 30, A = 50, B = 60, C = 90;
    }

    void print_info() override {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Isosceles_triangle : public A_right_angled_triangle {
public:
    Isosceles_triangle() {
        ShapeName = "Равнобедренный треугольник"; number_of_sides = 3, a = 10, b = 20, c = 10, A = 50, B = 60, C = 50;
        if (a == c && A == C) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная"; number_of_sides = 3, a = 10, b = 20, c = 10, A = 50, B = 60, C = 50;
    }

    void print_info() override {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Equilateral_triangle : public Isosceles_triangle {
public:
    Equilateral_triangle() {
        ShapeName = "Равносторонний треугольник"; number_of_sides = 3, a = 30, b = 30, c = 30, A = 60, B = 60, C = 60;
        if (a, b, c == 30 && A, B, C == 60) {  Accuracy = "Правильная"; }
        else Accuracy = "Неправильная";
        number_of_sides = 3, a = 30, b = 30, c = 30, A = 60, B = 60, C = 60;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Quadrilateral : public Triangle {
protected:
    int d, D;
public:
    Quadrilateral() {
        ShapeName = "Четырёхугольник"; number_of_sides = 4, a = 10, b = 20, c = 10, d = 20, A = 50, B = 60, C = 70, D = 80;
        if (number_of_sides == 4) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная"; number_of_sides = 4, a = 10, b = 20, c = 10, d = 20, A = 50, B = 60, C = 70, D = 80;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Rectangle : public Quadrilateral {
public:
    Rectangle() {
        ShapeName = "Прямоугольник"; number_of_sides = 4, a = 10, b = 20, c = 10, d = 20, A = 90, B = 90, C = 90, D = 90;
        if (a, c == b, d && A, B, C, D == 90) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная";
        number_of_sides = 4, a = 10, b = 20, c = 10, d = 20, A = 90, B = 90, C = 90, D = 90;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Square : public Rectangle {
public:
    Square() {
        ShapeName = "Квадрат"; number_of_sides = 4;
        a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90;
        if (a, c, b, d == 20 && A, B, C, D == 90) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная";
        number_of_sides = 4, a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Parallelogram : public Square {
public:
    Parallelogram() {
        ShapeName = "Параллелограмм"; number_of_sides = 4;
        a = 20, b = 30, c = 20, d = 30, A = 30, B = 40, C = 30, D = 40;
        if (a == c, b == d, A == C, B == D) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная";
        number_of_sides = 4, a = 20, b = 30, c = 20, d = 30, A = 30, B = 40, C = 30, D = 40;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Rhomb : public Parallelogram {
public:
    Rhomb() {
        ShapeName = "Ромб"; number_of_sides = 4, a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40;
        if (a, c, b, d == 120, A == C, B == D) { Accuracy = "Правильная"; }
        else Accuracy = "Неправильная"; number_of_sides = 4;
        a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\n" << Accuracy << "\nКоличество сторон: " << number_of_sides
            << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    figure.print_info();
    Triangle triangle;
    triangle.print_info();
    A_right_angled_triangle a_right_angled_triangle;
    a_right_angled_triangle.print_info();
    Isosceles_triangle isosceles_triangle;
    isosceles_triangle.print_info();
    Equilateral_triangle equilateral_triangle;
    equilateral_triangle.print_info();
    Quadrilateral quadrilateral;
    quadrilateral.print_info();
    Rectangle rectangle;
    rectangle.print_info();
    Square square;
    square.print_info();
    Parallelogram parallelogram;
    parallelogram.print_info();
    Rhomb rhomb;
    rhomb.print_info();
}