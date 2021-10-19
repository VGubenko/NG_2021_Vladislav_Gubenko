#include <iostream>

using namespace std;

int main()
{
 int a;
 int sum = 0;

 cout << "Entering a number to count ";
 cin >> a;

 while ( a = 0)
 {
    sum += a % 10;
    a /= 10;
 }
 cout << "in total " << sum << endl;

 return 0;
}
