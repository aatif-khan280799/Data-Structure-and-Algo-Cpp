#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int arr[10] = {23, 122, 41, 67};
    cout << "\n Address of first memory block: " << &arr[0] << endl;
    cout << "\n Address of first memory block: " << arr << endl;
    cout << "\n 4th: " << *arr << endl;
    cout << "\n 5th: " << *arr + 1  << endl;
    cout << "\n 6th: " << *(arr + 1) << endl;
    cout << "\n 7th: " << *(arr) + 1 << endl;
    cout << "\n 8th: " << arr[2] << endl;
    cout << "\n 9th: " << *(arr + 2 ) << endl;

    int i = 3;
    cout << "\n 10th: " << i[arr] << endl;
    

    int temp[10];
    cout << "\nSize of 'temp' array is: " << sizeof(temp) << "\n"
         << endl;

    int *ptr = &temp[0];
    cout << "\nSize of  array is: " << sizeof(ptr) << "\n"
         << endl;
    cout << "\nSize of  array is: " << sizeof(*ptr) << "\n"
         << endl;
    cout << "\nSize of  array is: " << sizeof(&ptr) << "\n"
         << endl;
     
     */

    int arr[10];

    //ERROR
    //-->>arr = arr + 1;
     int *ptr = &arr[0];
     cout << ptr <<endl;
     ptr = ptr + 1;
     cout << ptr<<endl;
    return 0;
}