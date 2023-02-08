#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main (){
    vector <int> myArr;
    bool stop = true;
    map<int, int> frequency;

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
                cout << err << "Something wrong" << endl;
            }
        }
    }

    for(auto x : myArr){
      frequency[x] ++;
    }

    for(auto x : frequency){
      cout << x.first << " -- " << x.second << " Times" << endl;
    }


    return 0;
}