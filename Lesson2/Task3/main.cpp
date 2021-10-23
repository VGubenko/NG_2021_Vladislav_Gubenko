#include <iostream>

using namespace std;

int main()
{
 int side;
 cout << "enter size ";
 cin >> side;
 for (int z = 0; z < side; z++) {
    for (int i = 0; i < side; i++) {
        if (z != 0 && z != side-1 && i != 0 && i != side-1)
            cout << " ";
        else
            cout << "*";
        }
        cout << endl;
    }
}
