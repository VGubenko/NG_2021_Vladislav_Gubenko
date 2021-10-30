#include <iostream>
#define basesize 10

using namespace std;

int main ()
{
    int basepin [basesize];
    int basemoney [basesize];
    for (int i = 0; i < basesize; i++) {
        basepin[0] = 0;
        basemoney[0] = 0;
        basepin[1] = 1;
        basemoney[1] = 100;
        basepin[2] = 2;
        basemoney[2] = 200;
        basepin[3] = 3;
        basemoney[3] = 300;
        basepin[4] = 4;
        basemoney[4] = 400;
        basepin[5] = 5;
        basemoney[5] = 500;
        basepin[6] = 6;
        basemoney[6] = 600;
        basepin[7] = 7;
        basemoney[7] = 700;
        basepin[8] = 8;
        basemoney[8] = 800;
        basepin[9] = 9;
        basemoney[9] = 900;
    }
    int nowlogin, nowpin;
    int key, amount;

    while (true) {
        cout <<  "Welcome to Wet Dreams Bank" << endl;
        cout << "Bank login: ";
        cin >> nowlogin;
        if (nowlogin >= 0 && nowlogin < basesize) {
            while (true){
            cout << "PIN-code for your bank account :";
            cin >> nowpin;
            if (nowpin == basepin[nowlogin]){
            cout << " " << endl;
            cout << "You have successfully logged in" << endl;
            cout << "Money :" << basemoney[nowlogin] << " $" << endl;
            cout << "Enter the service number to use it" << endl;
            cout << "***********************" << endl;
            cout << "* 1 - put money       *" << endl;
            cout << "* 2 - withdraw money  *" << endl;
            cout << "* 3 - change PIN code *" << endl;
            cout << "* 4 - Exit            *" << endl;
            cout << "***********************" << endl;
            cin >> key;
            if (key == 1){
                while (true){
                    cout << "Enter the amount of input :" << endl;
                cin >> amount;
                if (amount >= 0) {
                    basemoney[nowlogin] += amount;
                    break;
                }
                else {
                    cout << "Not a possible amount to enter" << endl;
                }
              }
            }
            else if (key == 2){
                while (true) {
                    cout << "How much do you want to rent :";
                    cin >> amount;
                    if (amount >= 0){
                        if (amount < basemoney[nowlogin]){
                            basemoney[nowlogin] -= amount;
                            break;
                        }
                        else {
                            cout << "Not a possible amount to enter" << endl;
                        }
                    }
                }
            }
            else if (key == 3){
                cout << "Enter the current PIN-code :";
                cin >> nowpin;
                if (nowpin == basepin[nowlogin]){
                    cout << "Enter new PIN-code :";
                    cin >> basepin[nowlogin];
                }
                else {
                    cout << "PIN-code is incorrect" << endl;
                }
            }
            else if (key == 4){
                break;
            }
            else {
                cout << "unknown button" << endl;
            }
        }
        else {
            cout << "PIN-code is incorrect" << endl;
            }
        }
    }
    else {
        cout << "Invalid account login" << endl;
        }
    }
}
