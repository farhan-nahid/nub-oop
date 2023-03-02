#include <iostream>

using namespace std;

class Calculator {
    private:
        double input1, input2, result;
        char op;

    public:
        Calculator(){
            cout << "Calculator is ready!" << endl;
        }

        int calculate(int input1, int input2, char op){
            this->input1 = input1;
            this->input2 = input2;
            this->op = op;

            switch (op) {
                case '+':
                    return result = input1 + input2;
                    break;

                case '-' :
                    return result = input1 - input2;
                    break;

                case '*':
                    return result = input1 * input2;
                    break;

                case '/':
                    return result = input1 / input2;
                    break;

                default :
                    cout << "Your Operator is invalid"; 
                    break;
            }

            return 0;
        }

        void showCalculation(){
            cout << input1 << " " << op << " " << input2 << " = " << result << endl;
        }

};

int main (){
    double val;
    Calculator c1 ;
    cout << "==================" << endl;
    val = c1.calculate(10, 20, '+') ;
    cout <<"Returned value:" << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 10, '-');
    cout <<"Returned value:" << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 5, '*');
    cout <<"Returned value:" << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 16, '/');
    cout <<"Returned value:" << val << endl;
    c1.showCalculation();
    return 0;
}