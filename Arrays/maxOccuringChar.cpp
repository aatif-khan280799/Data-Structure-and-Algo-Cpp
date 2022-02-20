#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string s)
{
    int arr[26] = {0};

    //create an array of count of character.
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        if(ch >= 'a' && ch <= 'z')    //lowercase
        {
            num  = ch - 'a';

        }
        else
        {
            //uppercase
            num = ch - 'A';
        }
        
        arr[num]++ ;

    }

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}


int main()
{
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;
    cout<<"Max occuring character in the string is: " << getMaxOccuringChar(s) << endl;

    return 0;
}
