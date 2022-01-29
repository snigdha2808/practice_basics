#include<bits/stdc++.h>
using namespace std;
void printVEC(vector<int>v)
{
    cout<<"size: "<<v.size()<<endl;
    //v.size time complexity is O(1)
    for(int i=0;i<v.size();i++)//v.size returns the size of vector
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;//initialization of vector
    //VALUES INPUT
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        //printVEC(v);//shows the dynamic property of an vector
        v.push_back(x);//o(1)-time complexity//add the value at the end of the array
    }
    printVEC(v);
}