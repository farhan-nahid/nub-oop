# Question 2

- Write the main class

```c
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
```
