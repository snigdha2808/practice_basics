#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;//pair<1,2>p;//1,2 are the datatypes of the element of the pair.
    p= make_pair(2,"abc");
    //p={2,"abc"};//alternative of initialising
    //pair<int,string>p1=p;//copy the value
    //p1.first=3;//value of p1.first will not change as the value is not passed by refernce instead of that a copy is passed
    pair<int,string> &p1=p;
    p1.first=3;//value of p1.first ill change as the value is paased by reference
    cout<<p.first<<" "<<p.second<<endl;//print first and last eement of the pair
    //TWO ARRAYS ARE GIVEN AND AND THEIR INDEX ARE REALTED WITH EACH OTHER
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    //swap(p_array[0],p_array[2]);//swap the pairs
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //INPUT IN PAIRS
    pair<int,string>p;
    cin>>p.first;
    cout<<p.first;
}