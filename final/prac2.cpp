
#include <iostream>
#include <string>

class Vehicle {
    public:
        int x, y;
    public:
        Vehicle() {
            x = 0;
            y = 0;
        }
        void moveUp() {
            y += 1;
        }
        void moveDown() {
            y -= 1;
        }
        void moveRight() {
            x += 1;
        }
        void moveLeft() {
            x -= 1;
        }
        std::string toString() {
            return "(" + std::to_string(x) + " , " + std::to_string(y) + ")";
        }
};

class Vehicle2010: public Vehicle {

public:
    void moveLowerLeft(){
    //y = y -1;
    //x = x - 1;
    moveDown();
    moveLeft();
    }
    void moveLowerRight(){
    //y = y -1;
    //x = x +1;
    moveDown();
    moveRight();
    }
    void moveUpperRight(){
    moveUp();
    moveRight();
    }
    void moveUpperLeft(){
    moveUp();
    moveRight();
    }
    bool equals (Vehicle2010 obj){
        if (x == obj.x && y == obj.y){
            return true;
        }
        else{
            return false;
        }
    }

};



int main() {
    std::cout << "Part 1" << std::endl;
    std::cout << "------" << std::endl;
    Vehicle car;
    std::cout << car.toString() << std::endl;
    car.moveUp();
    std::cout << car.toString() << std::endl;
    car.moveLeft();
    std::cout << car.toString() << std::endl;
    car.moveDown();
    std::cout << car.toString() << std::endl;
    car.moveRight();
    std::cout << car.toString() << std::endl;
    std::cout << "------" << std::endl;
    std::cout << "Part 2" << std::endl;
    std::cout << "------" << std::endl;
    Vehicle2010 car1;
    std::cout << car1.toString() << std::endl;
    car1.moveLowerLeft();
    std::cout << car1.toString() << std::endl;
    Vehicle2010 car2;
    car2.moveLeft();
    std::cout << car1.equals(car2) << std::endl;
    car2.moveDown();
    std::cout << car1.equals(car2) << std::endl;
    return 0;
}
