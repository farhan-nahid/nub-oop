#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector <int> myArr;
    bool stop = true;

    while(stop){
        string temp;
        cin >> temp ;
        if(temp == "STOP"){
            stop = false;
            break;
        } else{
            try{
              myArr.push_back(stoi(temp));
            } catch (string err){
              cout << err << endl;
            }
        }
    }

    for(int j =0; j < myArr.size(); j++){
        cout << myArr[j] << endl;
    }


    return 0;
}