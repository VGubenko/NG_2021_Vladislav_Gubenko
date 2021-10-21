#include <iostream>

using namespace std;

int main() {

 int mask;
 bool rep = 1;
 cout << "netmask: 255.255.255.";
 cin >> mask;
 while (rep != 0)

    rep = 0;
    switch (mask) {

        case 255: cout << "hosts number: " << 1; break;
        case 254: cout << "hosts number: " << 2; break;
        case 252: cout << "hosts number: " << 4; break;
        case 248: cout << "hosts number: " << 8; break;
        case 240: cout << "hosts number: " << 16; break;
        case 224: cout << "hosts number: " << 32; break;
        case 192: cout << "hosts number: " << 64; break;
        case 128: cout << "hosts number: " << 128; break;
        case 0: cout << "hosts number: " << 256; break;
        default:
            cout << "incorrect number, please entered try again." << endl;
                rep = 1;
        }

}
