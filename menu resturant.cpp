#include <iostream>
#include <iomanip>  

using namespace std;

const double TAX_RATE = 0.09;  


struct Food {
    int code;
    string name;
    double price;
};


struct Drink {
    int code;
    string name;
    double price;
};


struct Appetizer {
    int code;
    string name;
    double price;
};

int main(){
    Food foods[] = {
        {1, "Pizza", 177000},
        {2, "Burger", 50000},
        {3, "Pasta", 75000}
    };

    
    Drink drinks[] = {
        {1, "Coke", 10000},
        {2, "Juice", 15000},
        {3, "Water", 5000}
    };

    Appetizer appetizers[] = {
        {1, "Salad", 20000},
        {2, "Soup", 25000},
        {3, "Bread", 5000}
    };

    
    int foodCode, drinkCode, appetizerCode;
    cout << "Enter the food code: ";
    cin >> foodCode;
    cout << "Enter the drink code: ";
    cin >> drinkCode;
    cout << "Enter the appetizer code: ";
    cin >> appetizerCode;
    
    double foodPrice = 0, drinkPrice = 0, appetizerPrice = 0;
    for (int i = 0; i < 3; i++) {
        if (foods[i].code == foodCode) {
            foodPrice = foods[i].price;
        }
        if (drinks[i].code == drinkCode) {
            drinkPrice = drinks[i].price;
        }
        if (appetizers[i].code == appetizerCode) {
            appetizerPrice = appetizers[i].price;
        }
    }


    double totalPrice = foodPrice + drinkPrice + appetizerPrice;
    double taxAmount = totalPrice * TAX_RATE;
    double finalPrice = totalPrice + taxAmount;

    cout << fixed << setprecision(2);
    cout << "Total Price: " << totalPrice << " Rials" << endl;
    cout << "Tax Amount (9%): " << taxAmount << " Rials" << endl;
    cout << "Final Price: " << finalPrice << " Rials" << endl;

    return 0;
}
