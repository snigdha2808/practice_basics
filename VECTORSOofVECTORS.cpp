#include<bits/stdc++.h>
using namespace std;
void printVEC(vector<int>v)//&v ill be used if e dont ant make any copy but have to pass an actual vector
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 
int main()
{
    int N;
    cin>>N;
    //VECTOR OF VECTOR
    vector<vector<int>>v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);//row input
        }
        v.push_back(temp);//temp vector store in v vector
    }
    v[0].push_back(10);//add 10 in 1st row
    v[0].push_back(vector<int>())//vector has been added
    for(int i=0;i<N;i++)//for(int i=0;i<v.size();i++)
    {
        printVEC(v[i]);
    }
    //cout<<v[0][1];
}