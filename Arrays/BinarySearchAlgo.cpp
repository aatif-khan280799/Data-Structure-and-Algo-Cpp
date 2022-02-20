#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1; // go to left wala part
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int indexEven = binarySearch(even, 6, 12);
    cout << "Index of 12 is: " << indexEven << endl;
    int indexOdd = binarySearch(odd, 5, 11);
    cout << "Index of 11 is: " << indexOdd << endl;
}


// Time Complexity of Binary Search Algorithm:- O(log n)

/* condition to use BinarySearchAlgo :- elements should be in monotonic function (either increasing or decreasing)
                
                  s                            e
                 3(0)   5(1)   9(2)   13(3)  27(4)          key = 13
            
            find mid element mid = (s+e)/2;  --> 9 is the mid element ((0+4)/2 = 2)
            compare mid element with the key  --> not equal in this case   --> 13>9 --> search in right side of mid element.

              s          e
            13(3)      27(4) 
             find mid element mid = (s+e)/2;  --> 13 is the mid element ((3+4)/2 = 3)
             compare mid element by the key --> it is equal in this case  --> 13==13 -->return the element


        Overview of steps to be followed:-
          a) Find mid-element
          b) Compare with the key
          c) If equal then return the index, if not equal decide in which part to continue
          d) Repeat the same steps, untill key is found in the array elements.
        
        
        **** IMPORTANT POINT ****
        int max value = (2^31-1) --> while this, value of mid can go out of range for int data type.
        --> use this instead :: mid = [ s + (e-s)/2 ]  --> secret trick to avoid array overflow.
    */
   
   