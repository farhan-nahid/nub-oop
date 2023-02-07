#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (){
    map <int, int> number_count;
    string input;

    while (true){
        cin >> input;

        if(input == "STOP"){
            break;
        }

        int num = stoi(input);
        number_count[num]++;
    }
    
    // for(const auto& [num, count] : number_count){
    //     cout << num << "---" << count ;
    // }



  for (const auto& [num, count] : number_count) {
    std::cout << num << " - " << count << " times\n";
  }

    return 0;
}