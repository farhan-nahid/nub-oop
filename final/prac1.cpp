#include<iostream>
using namespace std;

class Parent{
private:
    int a, b;
public:
    Parent(int x, int y){
        a = x; //4
        b = y; //5
    }
    void show(){
    cout<<"The first value of parent class is: "<<a<<endl;
    cout<<"The second value of parent class is: "<<b<<endl;
    }
};

class Child: public Parent{
private:
    int x, y;
public:
    Child(int p1, int p2, int c1, int c2): Parent(p1, p2){
        x = c1; //6
        y = c2; //7
    }
    void display(){
    cout<<"The first value of child class is: "<<x<<endl;
    cout<<"The second value of child class is: "<<y<<endl;
    }
};

int main(){
 Child c1(4, 5, 6, 7);
 c1.show();
 c1.display();

return 0;
}
