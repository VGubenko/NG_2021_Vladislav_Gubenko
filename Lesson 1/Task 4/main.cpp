#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, D, x, x1, x2;
    cout << "Solving a Quadratic Equation" << endl << "Enter the variables a, b, c" << endl;
    cin >> a >> b >> c;
    D=b*b-4*a*c;
    cout << "The discriminant is " << D << endl;
    if (D < 0)
        cout << "The equation has no solutions" << endl;
    if (D == 0)

        cout << "The equation has one solution" << endl;
        x=-b/(2*a);
        cout << "x=" << x;

    if (D > 0)

        cout << "The equation has two solutions" << endl;
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout << "x1=" << x1 << ", " << "x2=" << x2 << endl;

    cout << "Kwur 1" << endl << endl << "9-10.04.2009" << endl;
}
