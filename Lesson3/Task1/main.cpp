#include <iostream>

using namespace std;

int main()
{

 int num = 0 ;

 cout << "Fill the array = " <<endl;
 int arr[10];

 for (int i = 0; i < 10; i++)
 cin >> arr[i];

 cout << "increase the array by ";
 cin >> num;

 for (int i = 0; i < 10; i++)
    arr[i] += num;

 for (int i = 0; i < 10; i++)
    cout << arr[i]<< endl;

 return 0;
}
