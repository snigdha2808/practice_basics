/*
Give a permutation of first N natural numbers as an array A[].
Your task is to sort the array in exactly 2 swaps.If it possible to sort the array then return 
True othrwise return False.
NOTE:You can swap same pair of index two times.

Input:
N = 4
A[] = {4, 3, 2, 1}
Output: Yes
Explanation: 
swap(A[1], A[4]), now A[] = {1, 3, 2, 4}
swap(A[2], A[3]), now A[] = {1, 2, 3, 4}
Input:
N = 4
A[] = {4, 3, 1, 2}
Output: No
Explanation: 
Not possible to sort the array in 2 swaps.
The task is to complete the function check() which takes the array A[] and its size N as
input parameters and returnsthe boolean value True if it is possible to sort the array in
exactly 2 swaps, otherwise rturns False.
*/
class Solution 
{ 
    boolean checkSorted(int N, int arr[]) 
    { 
        // code here
        if(N==1)
        {
            return false;
        }
        int c=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]!=i+1)
            {
               int t= arr[arr[i]-1];
               arr[arr[i]-1]=arr[i];
               arr[i]=t;
                c++;
                if(arr[i]!=i+1)
                {
                   t= arr[arr[i]-1];
                    arr[arr[i]-1]=arr[i];
                    arr[i]=t;
                    c++;
                }
            }
        }
        if(c==0||c==2)
        {
            return true;
        }
        return false;
    }
}
