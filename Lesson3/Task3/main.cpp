#include <iostream>
#include <random>

using namespace std;

int main()
{
 int array1 = 0, array2 = 0;
 int arr1[4], arr2[4];
 for (int i = 0; i < 4; i++) {
    arr1[i] = rand()&10;
    arr2[i] = rand()&10;
 }
 array1 = arr1[0]*1000 + arr1[1]*100 + arr1[2]*10 + arr1[3];
 array2 = arr2[0]*1000 + arr2[1]*100 + arr2[2]*10 + arr2[3];
 cout << "Got:" << array1 << " + " << array2 << endl;
 cout << "Result :" << array1+array2;
}
