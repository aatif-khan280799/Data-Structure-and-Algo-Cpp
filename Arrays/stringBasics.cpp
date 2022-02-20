#include<bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++ ;
    }
    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while(s < e)
    {
        swap(name[s++], name[e--]);
    }
}

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';      // for lower to upperCase --> char temp = ch - 'a' + 'A';
        return temp;
    }

}

bool checkPalindrome(char a[], int n)
{
 int s = 0;
 int e = n-1;
 while(s <= e)
 {
     if(toLowerCase (a[s] ) != toLowerCase (a[e]) )
     {
         return 0;
     }
     
     else{
         s++;
         e--;
     }
 }
 return 1; 
}


int main()
{
    char name[20];
    cout<<"Enter your name: ";
    cin >> name;
   
    int size = getLength(name);
    cout<<"Length of your string is: "<<size<<endl;

    reverse(name, size);
     cout<<"Your name is : "<<name<<endl;

     cout<<"PALINDROME OR NOT:  "<<checkPalindrome(name, size);

    //  cout<<"\n CHARACTER IS:  "<<toLowerCase('b')<<endl;
    //  cout<<"\n CHARACTER IS:  "<<toLowerCase('C')<<endl;
    
    return 0;
}