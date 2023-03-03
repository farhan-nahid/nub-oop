#include <iostream>

using namespace std;

class Person{
    public:
        string name;
        int age;
        string occupation;

        Person(){
            name = "John Doe";
            age = 30;
            occupation = "Software Engineer";
        }

        Person(string name, int age, string occupation){
            this->name = name;
            this->age = age;
            this->occupation = occupation;
        }
};

int main() {
    Person person;
    cout << "Part 1" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Occupation: " << person.occupation << endl;
    person.occupation = "Data Scientist";
    cout << "Occupation: " << person.occupation << endl;

    Person person2("ABC", 23, "Student");
    cout << "Part 2" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    person2.occupation = "Data Scientist";
    cout << "Occupation: " << person2.occupation << endl;
    return 0;
}