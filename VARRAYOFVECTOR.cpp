#include<bits/stdc++.h>
using namespace std;
void printVEC(vector<int>v)//&v ill be used if e dont ant make any copy but have to pass an actual vector
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    //declare array of vectors
    vector<int>v[N];//n vectors are declared of 0 size.
    for(int i=0;i<N;i++)//input for N vectors
    {
        int n;
        cin>>n;//size of Nth vector
        for(int j=0;j<n;j++)//jth value placed in ith 
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        printVEC(v[i]);
    }
    cout<<v[0][0];//1st value of vector 0 // kind of 2-D array where rows are fixed but columns vary as rows are declared as array and as ro
}