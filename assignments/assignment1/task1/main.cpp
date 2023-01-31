#include <iostream>

using namespace std;

string check_string(string text){
    string result;
    bool is_string = false, is_number = false;
  
    for(int i=0; i< text.length(); i++){
        int ascii_value = (int) text[i];

        if(is_number && is_string){
            break;
        }

        if(ascii_value >=48 && ascii_value <= 57){
            is_number = true;
        } else if((ascii_value >= 65 && ascii_value <= 90) || (ascii_value >= 97 && ascii_value <= 122)){
            is_string = true;
        }
    }

    if(is_string && is_number){
        result = "MIXED";
    } else if(is_string){
        result = "STRING";
    } else{
        result ="NUMBER";
    }

    return result;
}

int main () {
    string input_value;
    cin >> input_value;

    string output = check_string(input_value);
    cout << output << endl;

    return 0;
}