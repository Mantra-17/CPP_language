#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    void moveX(int dx) {
        x += dx;
    }

    void moveY(int dy) {
        y += dy;
    }

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void display() const {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(4, 6);

    p.moveX(3);
    p.moveY(-4);
    p.move(2, 2);

    p.display();
cout<<"Patel Mantra\n24DCS06";
    return 0;
}

