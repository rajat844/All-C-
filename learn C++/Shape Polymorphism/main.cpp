#include <iostream>
#include <vector>

using namespace std;

class Shape {
private:

public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() { cout << "shape destructor" << endl; }
};

class Open_Shape :public Shape {
public:
    virtual ~Open_Shape() { cout << "Open Shape destructor" << endl;; }
};

class Closed_Shape :public Shape {
public:
    virtual ~Closed_Shape() { cout << "Closed Shape destructor" << endl; }
};

class Line : public Open_Shape {
public:
    virtual void draw() override {
        cout << "Drawing a line" << endl;
    }
    virtual void rotate() override {
        cout << "rotating a line" << endl;
    }
    virtual ~Line() {}
};

class Circle :public Closed_Shape {
public:
    virtual void draw() override {
        cout << "Drawing a circle" << endl;
    }
    virtual void rotate() override {
        cout << "rotating a circle " << endl;
    }
    virtual ~Circle() {}
};

class Square :public Closed_Shape {
public:
    virtual void draw() override {
        cout << "Drawing a square" << endl;
    }
    virtual void rotate() override {
        cout << "rotating a square" << endl;
    }
    virtual ~Square() {}
};

int main() {
    // Shape s;

    // Circle c;
    // c.draw();

    // Shape* ptr1 = new Circle();
    // ptr1->draw();
    // ptr1->rotate();

    Shape* s1 = new Circle();
    Shape* s2 = new Line();
    Shape* s3 = new Square();

    vector <Shape*>shapes{ s1,s2,s3 };
    for (const auto p : shapes) {
        p->draw();
        p->rotate();
    }
    delete s1;
    delete s2;
    delete s3;
    return 0;
}