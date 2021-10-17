#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    a = 0;
    b = 0;

    cout << "Introduction of the ship weight " << endl;
    cout << "in tones " ;
    cin >> a;

    b = ((a / 3) - 2);

    if ( b > 0 )
        cout << "Your ship is using " << b << " ton of fuel, on a journey of 300 light years";

    else if ( b <= 0 )
        cout << "You definitely have a ship and not a car " << endl;
        cout << "Maybe check the weight and try again";

    return 0;
}
