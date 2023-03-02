#include <iostream>

class Calculator {
    private:
        double result = 0;

    public:
        Calculator() {}

        Calculator(double number) {
            result = number;
            std::cout << "Calculator is initialized with: " << result << std::endl;
        }

        static Calculator *init(double number = 0) {
            Calculator *calc = new Calculator(number);
            return calc;
        }

        Calculator *add(double number) {
            Calculator *calc = this;
            std::cout << result << " + " << number << " = ";
            calc->result = calc->result + number;
            std::cout << result << std::endl;
            return calc;
        }

        Calculator *subtract(double number) {
            Calculator *calc = this;
            std::cout << result << " - " << number << " = ";
            calc->result = calc->result - number;
            std::cout << result << std::endl;
            return calc;
        }

        Calculator *multiply(double number) {
            Calculator *calc = this;
            std::cout << result << " * " << number << " = ";
            calc->result = calc->result * number;
            std::cout << result << std::endl;
            return calc;
        }

        Calculator *division(double number) {
            Calculator *calc = this;
            std::cout << result << " / " << number << " = ";
            calc->result = calc->result / number;
            std::cout << result << std::endl;
            return calc;
        }

        Calculator *print_result() {
            Calculator *calc = this;
            std::cout << "Result is: " << calc->result << std::endl;
            return calc;
        }

        Calculator *reset(double number = 0) {
            Calculator *calc = this;
            calc->result = number;
            std::cout << "Calculator is reset to: " << calc->result << std::endl;
            return calc;
        }
};

int main(int args, char* argv[]) {
    free(Calculator().init(120)->add(10)->add(50)
        ->division(3)->subtract(40)->print_result()
        ->add(5)->print_result()->multiply(4)->print_result()
        ->reset()->add(10)->multiply(10)->print_result());
    
    return 0;
}