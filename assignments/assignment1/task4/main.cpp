#include <iostream>

using namespace std;

double calculate_BMI (double height, double weight) {
    return  (weight * weight) / height;
}


int main () {
    double meter = 0, kg = 0; 

    cout << "Enter your Weight(KG)" << endl;

    cin >> kg;

    cout << "Enter your height(Meter)" << endl;
    
    cin >> meter;

    double BMI = calculate_BMI(meter, kg);

    if(BMI < 18.5){
        cout << "Underweight";
    } else if(BMI > 18.5 && BMI <=24.9){
        cout << "Normal";
    } else if(BMI >=25 && BMI <=30){
        cout << "Underweight";
    } else if(BMI > 30){
        cout << "Obese" << endl;
    }



    return 0;

}