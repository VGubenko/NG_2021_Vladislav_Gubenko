#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1;
        a = 0;
        b = 0;
        c = 0;
        x1 = 0;

    cout << "Introduction of the ship weight " << endl;
    cout << "in tones " ;
    cin >> a;

        b = a / 3;
        x1 = ( int ) ( b + 0.9 );
        c = x1 - 2;

    if ( c > 0 )
        cout << "Your ship is using" << " " << c << " " << "ton of fuel, on a journey of 300 light years";

        else if ( c <= 0 )
            cout << "You definitely have a ship and not a car " << endl;
            cout << "Maybe check the weight and try again";

    return 0;
}
