#include <iostream>

using namespace std;

void check_password (int length, string str) {
    bool is_number = false, is_capital_letter = false, is_lower_letter = false, is_spacial_character = false;

    for(int i =0; i < length; i++){
        int ascii_value = (int) str[i];
        
        if(ascii_value >= 48 && ascii_value <=57){
            is_number = true;
        } 

        if(ascii_value >= 65 && ascii_value <=90){
            is_capital_letter = true;
        }
        
        if(ascii_value >= 97 && ascii_value <=122){
            is_lower_letter = true;
        }

         if(ascii_value == 95 || ascii_value == 36 || ascii_value == 35 || ascii_value == 64){
            is_spacial_character = true;
        }
    }

    if(is_number && is_capital_letter && is_lower_letter && is_spacial_character){
        cout << "OK" << endl;
    }else{
        if(!is_number){
             cout << "Digit Missing" << endl;
        } 

        if(!is_capital_letter){
             cout << "Uppercase character Missing" << endl;
        }

        if(!is_lower_letter){
             cout << "Lowercase character Missing" << endl;
        } 

        if(!is_spacial_character){
             cout << "Special Character Missing" << endl;
        }
    }
}

int main () {
    string password;
    int length = 0;  

    cin >> password;

    while (password[length]){
        length++;
    }

   check_password(length, password);

    return 0;
}