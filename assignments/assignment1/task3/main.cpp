#include <iostream>

using namespace std;

int main (){
    int myArr[] = {}, i = 0;
    bool stop = true;

    while(stop){
        string temp;
        cin >> temp ;
        if(temp == "STOP"){
            stop = false;
            break;
        } else{
            myArr [i] = stoi(temp);
        }

         i++;
    }

    for(int j =0; j < i; j++){
        cout << myArr[j] << endl;
    }


    return 0;
}