#include <iostream>
#include <string>

using namespace std;

void welcome()
{
    system("clear");
    puts("BBQ Chicken Cheese Burger ▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 250TK" );
    puts("Beef Burger ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 170TK" );
    puts("Naga Drums ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 200TK" );
   
    puts("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬" );
   
    puts("Your Location" );
    puts("Dhanmondi / Outside" );
}


double total_cost(string food, string location){
    double total = 0, food_price = 0, tax = 8, delivery_charge = 0;

    cout << food << endl;

    if(location == "Dhanmondi"){
        delivery_charge = 40;
    } else {
        delivery_charge = 60;
    }

    if(food == "BBQ Chicken Cheese Burger"){
        food_price = 250;
    } else if (food == "Beef Burger"){
        food_price = 170;
    } else if(food == "Naga Drums"){
        food_price = 200;
    } else{
        cout << "Your food name is not valid" << endl;
    }

    total = ((food_price /100 ) * tax )+ (food_price + delivery_charge);

    return total;
}

int main () {
    char food[80], location[80];

    welcome();

    cout << "Enter your food name" << endl;

    // cin >> food;
    cin.getline (food, 80);

    cout << "Enter your location name" << endl;

    cin.getline(location, 80);

    double total = total_cost(food, location);

    cout << total << endl;

    return 0;
}