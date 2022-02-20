#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
//reference variable of 'i'
    int &j = i;
    cout << i << endl;

    i++; 
    cout << i << endl;
    
    j++;
    cout << i << endl;
    
    return 0;
}