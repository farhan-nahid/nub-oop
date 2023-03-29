#include <iostream>
#include <math.h>

using namespace std;

class Circle{
    private:
        int radius;
    
    public:
        Circle(){
           radius = 0;
        }

        Circle(int radius){
            this->radius = radius;
        }

        Circle operator+ (Circle const& obj){
            Circle temp;
            temp.radius = this->radius + obj.radius;
            return temp;
        }

        int getRadius(){
            return radius;
        }

        double getArea(){
            return M_PI * pow(radius, 2);
        }
};

int main() {
    Circle c1(4);
    cout << "First circle radius: " << c1.getRadius() << endl;
    cout << "First circle area: " << c1.getArea() << endl;

    Circle c2(5);
    cout << "Second circle radius: " << c2.getRadius() << endl;
    cout << "Second circle area: " << c2.getArea() << endl;

    Circle c3 = c1 + c2;
    cout << "Third circle radius: " << c3.getRadius() << endl;
    cout << "Third circle area: " << c3.getArea() << endl;

    return 0;
}