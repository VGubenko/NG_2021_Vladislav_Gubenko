#include <iostream>

using namespace std;

int main()
{
cout << "given a=50, b=20" << endl;
int a = 50;
int b = 20;
    a = a + b;
    b = a - b;
    a -= b;

cout << "after processing" << " " << "a=" << a << " " << "b=" << b;

return 0;
}
