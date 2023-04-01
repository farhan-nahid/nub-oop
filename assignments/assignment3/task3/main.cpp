#include <iostream>
#include <string>

using namespace std;

// takes a string and convert this to lower case
string string_lower_case(string upTxt) {
	for (int i = 0; i < upTxt.length(); i++) {
  		if(upTxt[i] >= 'A' && upTxt[i] <= 'Z') {
  			upTxt[i] = upTxt[i] + 32;
		}
  	}
  	return upTxt;
}

class Color{
    private:
        string color, finalColor;
    
    public:
        Color(){
            color = "";
            finalColor = "";
        }

        Color(string color1){
            this->color = color1;
        }

        // operator overloading method
        Color operator+(Color const& obj){
            Color temp;
            if(
            (string_lower_case(color) == "red" && string_lower_case(obj.color) == "yellow") || 
            (string_lower_case(color) == "yellow" && string_lower_case(obj.color) == "red") 
            ){
              temp.finalColor = "Orange";
            } 
           
            else  if(
            (string_lower_case(color) == "red" && string_lower_case(obj.color) == "blue") || 
            (string_lower_case(color) == "blue" && string_lower_case(obj.color) == "red") 
            ){
              temp.finalColor = "Violet";
            } 
            
            else  if(
            (string_lower_case(color) == "blue" && string_lower_case(obj.color) == "yellow") || 
            (string_lower_case(color) == "yellow" && string_lower_case(obj.color) == "blue") 
            ){
              temp.finalColor = "Green";
            } 

            else {
                temp.finalColor = "Invalid Calor input";
            }

            return temp;
        }

        string getColor(){
            return finalColor;
        }


     friend Color readColor();
};


// friend function 
Color readColor(){
    Color temp;
    cout << "Input Your Color: ";
    cin >> temp.color;

    return temp;
}


int main() {
    Color C1 = readColor();
    Color C2 = readColor();
    Color C3 = C1 + C2;
    cout << "Color formed: " << C3.getColor() << endl;
    return 0;
}