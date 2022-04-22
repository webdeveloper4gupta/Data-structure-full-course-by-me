#include<bits/stdc++.h>
using namespace std;
int main()
{
    // in c++ vector index starts from 1
    vector<int> v={1,2,3,4,5,6};
    int index;
    int element;
    cout<<"enter the element you want to add in the vector"<<endl;
    cin>>element;
    cout<<"eneter the index where you want to replace"<<endl;
    cin>>index;
 replace(v.begin(),v.end(),index,element);
 for(int x:v){
     cout<<x<<endl;
 }
}