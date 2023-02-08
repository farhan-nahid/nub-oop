#include <iostream>

using namespace std;

bool is_palindrome(int length, string word_or_line){
    int j = 0;
    bool output = true;

    for(int i = length; i >= 0; i--){
        if(!output){
            break;
        }

        if(word_or_line[i-1] == ' '){
            i--;
        }

        if(word_or_line[j] == ' '){
            j++;
        }

        if(word_or_line[i-1] == word_or_line[j]){
            output = true;
            j++;
        }else{
            output = false;
        }   
    }


    return output;

}

int main (){
    int str_length = 1;
    string palindrome_word = "";
  
    getline(cin ,palindrome_word);

    while (palindrome_word[str_length]){
      str_length ++;
    }

    bool result = is_palindrome(str_length, palindrome_word);
  
    if(result){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not a palindrome" << endl;
    }
    
    return 0;
}