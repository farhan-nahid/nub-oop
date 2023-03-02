#include <iostream>

using namespace std;

class Car {
    private:
        string make;
        string model;
        int year;
        double price;
    
    public:
        Car(){
            make = "";
            model = "";
            year = 0;
            price = 0.00000;
        }

        Car(string make, string model, int year, double price){
            this->make = make;
            this->model = model;
            this->year = year;
            this->price = price;
        }

        void setMake (string make){
            this->make = make;
        }

        void setModel (string model){
            this->model = model;
        }

        void setYear (int year){
            this->year = year;
        }

        void setPrice (double price){
            this->price = price;
        }

        string getMake (){
            return this->make;
        }

        string getModel (){
            return this->model;
        }

        int getYear (){
            return this->year;
        }

        double getPrice (){
            return this->price;
        }
};

int main (){
    Car car1;   // call the class without parameter or call the default constructor
    Car car2("Make1", "Model1", 2023, 45000.9);    // call the class with parameter or call the parameterized constructor



    cout << "========================================== Value before calling setter function ==========================================" << endl;



    // get the all value of car 1
    cout << car1.getMake() << endl ;
    cout << car1.getModel() << endl ;
    cout << car1.getYear() << endl ;
    cout << car1.getPrice() << endl ;

    // get the all value of car2
    cout << car2.getMake() << endl ;
    cout << car2.getModel() << endl ;
    cout << car2.getYear() << endl ;
    cout << car2.getPrice() << endl ;

    // set the value in car1
    car1.setMake("Make 2");
    car1.setModel("Model 2");
    car1.setYear(2024);
    car1.setPrice(55000.9);

    // set the value in car2
    car2.setMake("Change Make 1");
    car2.setModel("Change Model 1");
    car2.setYear(2025);
    car2.setPrice(65000.91);





    cout << "========================================== Value after calling setter function ==========================================" << endl;





    // get the all value of car 1
    cout << car1.getMake() << endl ;
    cout << car1.getModel() << endl ;
    cout << car1.getYear() << endl ;
    cout << car1.getPrice() << endl ;

    // get the all value of car2
    cout << car2.getMake() << endl ;
    cout << car2.getModel() << endl ;
    cout << car2.getYear() << endl ;
    cout << car2.getPrice() << endl ;

    return 0;
}