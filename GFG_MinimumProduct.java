/*
You are given 2 integers N and S. Consider an array A with the following properties:
(i) A should contain exactly N positive integers.
(ii) The sum of elements in the array is S.
Let P denote the product of all elements in the array. Find the minimum value of P.
Input:
N = 3
S = 3
Output: 1
Explanation: The only possible array could be
1 ,1 ,1.
Input:
N = 2
S = 3
Output: 2
Explanation: Optimal array will be
2, 1.
*/
class Solution {
    public static int solve(int N, int S) {
        // add your code here
        int res=S-(N-1);
        return res;
    }
}
