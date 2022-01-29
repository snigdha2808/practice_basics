#include<bits/stdc++.h>
using namespace std;
void printVEC(vector<string>&v)//&v ill be used if e dont ant make any copy but have to pass an actual vector
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
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    printVEC(v);
}