#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }

        else if(key > arr[mid])   // right me jaao
        {
            s = mid + 1;
        }

        else if ( key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}


int lastOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid])   // right me jaao
        {
            s = mid + 1;
        }

        else if ( key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main()
{
    int even[5] = {1,2,3,3,5};
    cout<<"first occurence of 3 is at index no.: "<<firstOccurence(even, 5, 3)<<endl;
    cout<<"last occurence of 3 is at index no.: "<<lastOccurence(even, 5, 3)<<endl;
    return 0;
}