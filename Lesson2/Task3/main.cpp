#include <iostream>

using namespace std;

int main()
{
 int side;
 cout << "enter size = ";
 cin >> side;

 for ( int z = 1; z <= side; z++ )
 {
    cout << "*";
 }
    cout << endl;
 for ( int i = 1; i <= side - 2; i++ )
 {
    cout << "*";
 for ( int j= 1; j <= side - 2; j++ )
 {
    cout << " ";
 }
    cout << "*" << endl;
 }
 for ( int y = 1; y <= side; y++ )
    cout << "*";

}
