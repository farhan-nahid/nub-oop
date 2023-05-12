#include <iostream>
using namespace std;

class Distance{
    private:
        int feet ;
        float inches ;
    public:
        Distance(){
            feet=0;
            inches = 0;
        }
        Distance(int f, float i){ //constructor overloading
            feet=f;
            inches = i;
        }
        void display(){
        cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
        }
        void operator ++(int){ //post increment / postfix
           feet++;
           inches++;
        }
        Distance operator ++(){ //pre increment/ prefix
            return Distance(feet++, inches++);

        }

};

main(){
    Distance d1(3, 6.5);
    Distance d2(4, 4.5);
    Distance d3(2, 1.4);


    cout<<"Before Increment"<<endl;

    d1.display();
    d2.display();
    d3.display();

    ++d3;
    ++d1;
    d2++;

    cout<<"After increment"<<endl;
    d2.display();
    d1.display();
    d2 = ++d1;
    d2.display();
    d3.display();
    d1.display();
}
