#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    //address of operator --> '&'

    cout << "Address of num is: "<< &num << endl;

    int *ptr = &num;
    cout<<"value is: "<<*ptr<<endl;
    cout<<"address is: "<<ptr<<endl;


    return 0;
}