#include <iostream>

using namespace std;

class Shape {
    private:
        string name;
        int num1, num2;

    public:
        Shape(string name, int num1, int num2){
            this->name = name;
            this->num1 = num1;
            this->num2 = num2;
        }

        string getName() {
            return name;
        }

        void area() {
            if(name == "Triangle"){
                cout << "Area: " << .5 * num1 * num2 << endl;
            } else if (name == "Rectangle"){
                cout << "Area: " << num1 * num2 << endl;
            } else if (name == "Rhombus"){
                cout << "Area: " <<  num1 * num2 / 2 << endl; 
            } else if (name == "Square"){
                cout << "Area: " << num1 * num2 << endl;
            } else{
                cout << "Area: Shape unknown" << endl;
            }
        }
};

int main (){
    Shape triangle("Triangle",10,25);
    triangle.area();
    cout << "==================" << endl;
    Shape square("Square",10,10);
    square.area();
    cout << "==================" << endl;
    Shape rhombus("Rhombus",18,25);
    rhombus.area();
    cout << "==================" << endl;
    Shape rectangle("Rectangle",15,30);
    rectangle.area();
    cout << "==================" << endl;
    Shape trapezium("Trapezium",15,30);
    trapezium.area();

    return 0;
}