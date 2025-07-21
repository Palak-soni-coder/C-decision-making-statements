// EXPERIMENT-5
// PALAK SONI
// 24070123069
// ENTC A3
// Problem Statement: Write a program using switch case and break statements.

#include <iostream>
using namespace std;

int main() {
    int choice;
    int preference;

    
    cout << " Welcome to the International Cuisine Menu " << endl;
    cout << "1. Chinese food" << endl
         << "   1. Manchurian" << endl
         << "   2. Hakka Noodles" << endl;
    cout << "2. Italian food" << endl
         << "   1. Spaghetti" << endl
         << "   2. Pizza" << endl;
    cout << "3. Indian food" << endl
         << "   1. Dosa" << endl
         << "   2. Idli" << endl;
    cout << "4. Thai food" << endl
         << "   1. Thai special sweet" << endl
         << "   2. Thai curry" << endl;
    cout << "5. French food" << endl
         << "   1. Macarons" << endl
         << "   2. Onion soup" << endl;
    cout << "6. Mexican food" << endl
         << "   1. Tacos" << endl
         << "   2. Burritos" << endl;
    cout << "7. Japanese food" << endl
         << "   1. Sushi" << endl
         << "   2. Ramen" << endl;


    cout << "\nEnter your cuisine choice (1 to 7): ";
    cin >> choice;

    if (choice >= 1 && choice <= 7) {
        cout << "Enter your dish preference (1 or 2): ";
        cin >> preference;

      
        switch (choice) {
            case 1:
                cout << "\nCuisine: Chinese" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Manchurian" << endl; break;
                    case 2: cout << "Dish: Hakka Noodles" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 2:
                cout << "\nCuisine: Italian" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Spaghetti" << endl; break;
                    case 2: cout << "Dish: Pizza" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 3:
                cout << "\nCuisine: Indian" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Dosa" << endl; break;
                    case 2: cout << "Dish: Idli" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 4:
                cout << "\nCuisine: Thai" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Thai special sweet" << endl; break;
                    case 2: cout << "Dish: Thai curry" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 5:
                cout << "\nCuisine: French" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Macarons" << endl; break;
                    case 2: cout << "Dish: Onion soup" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 6:
                cout << "\nCuisine: Mexican" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Tacos" << endl; break;
                    case 2: cout << "Dish: Burritos" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
            case 7:
                cout << "\nCuisine: Japanese" << endl;
                switch (preference) {
                    case 1: cout << "Dish: Sushi" << endl; break;
                    case 2: cout << "Dish: Ramen" << endl; break;
                    default: cout << "Invalid dish preference." << endl;
                }
                break;
        }
    } else {
        cout << "Sorry, we have only 7 types of cuisine available in our menu." << endl;
    }

    return 0;
}


/*Output: 
Welcome to the International Cuisine Menu 
1. Chinese food
   1. Manchurian
   2. Hakka Noodles
2. Italian food
   1. Spaghetti
   2. Pizza
3. Indian food
   1. Dosa
   2. Idli
4. Thai food
   1. Thai special sweet
   2. Thai curry
5. French food
   1. Macarons
   2. Onion soup
6. Mexican food
   1. Tacos
   2. Burritos
7. Japanese food
   1. Sushi
   2. Ramen

Enter your cuisine choice (1 to 7): 4
Enter your dish preference (1 or 2): 2

Cuisine: Thai
Dish: Thai curry
*/
