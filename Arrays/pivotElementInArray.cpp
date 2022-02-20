#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;      // ---> For reason of returning "s", do dry run once u will understand.
    // return e;   --> This also works, both "s" & "e" points to the same element.
}

int main()
{
    int arr[5] = {7,9,1,2,3};
    cout<<"Pivot element is at index: "<<getPivot(arr, 5) << endl;
}


/*
  input --> {1,2,3,7,9} --> sorted array
            {7,9,1,2,3}  --> rotated array

                9 ----------> this can be my pivot element
              /  \
            7     \
                   \       3       
                    \     /    
                     \   2
                      \ /
                       1 ----------> this can be my pivot element
                    
        In this program, we will choose "1" as our pivot element.

        procedure --> 
            a) mid = s + (e-s)/2;

            b) if (arr[mid] >= arr[0])   --> element on line with increasing slope on LHS.
                in this case --> s = mid + 1 ;

               else          --> element on line with increasing slope on RHS
                in this case --> e = mid;
            
            c) return s;
*/