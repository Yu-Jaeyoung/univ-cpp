/*
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    string name;
    int width, height;
public:
    Shape(string n = "", int w = 0, int h = 0) {
        name = n;
        width = w;
        height = h;
    }

    virtual double getArea() { return 0; }

    string getName() { return name; }
};


class Oval : public Shape {
public:
    Oval(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {
        name = n;
        width = w;
        height = h;
    }

    virtual double getArea() { return (width/2) * (height/2) * M_PI; }
};

class Rect : public Shape {
public:
    Rect(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {
        name = n;
        width = w;
        height = h;
    }

    virtual double getArea() { return width * height; }
};

class Triangular : public Shape {
public:
    Triangular(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {
        name = n;
        width = w;
        height = h;
    }

    virtual double getArea() { return width * height / 2; }
};

int main(void) {
    Shape *p[3];
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);

    for (int i = 0; i < 3; i++)
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

    for (int i = 0; i < 3; i++)
        delete p[i];
}
*/
