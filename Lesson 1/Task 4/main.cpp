#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, D, x, x1, x2;
    a = 0;
    b = 0;
    c = 0;
    D = 0;
    x = 0;
    x1 = 0;
    x2 = 0;

    cout << "Solving a Quadratic Equation" << endl;

    cout << "Enter the variables a" << endl;
        cin >> a;
    cout << "Enter the variables b" << endl;
        cin >> b;
    cout << "Enter the variables c" << endl;
        cin >> c;

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
