#include <iostream>

using namespace std;

int main()
{
 int pincodes[10] = {1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1000}, money[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
 int takeUser = 0, action = 0, moneyToget = 0, enterPincode = 0;
 while (true){
    cout << "Welcome to Bank Wet Dreams" << endl;
    cout << "Enter Login" << endl;
    cin >> takeUser;
    cout << "Enter PIN-codes" << endl;
    cin >> enterPincode;
    if (pincodes[takeUser] == enterPincode){
        cout << "Your balance: " << money[takeUser] << endl;
        cout << "Choose action " << endl;
        cout << "1 add money" << endl;
        cout << "2 widthraw money" << endl;
        cin >> action;
        cout << "Enter money" << endl;
        cin >> moneyToget;
        switch(action){
        case 1:
        money[takeUser] += moneyToget;
        break;
        case 2:
            if (moneyToget <= money[takeUser]){
                money[takeUser] -= moneyToget;
                break;
        }
        else {
            cout << "There is not enough money in the account" << endl;
            }
        }
     }
  }
}
