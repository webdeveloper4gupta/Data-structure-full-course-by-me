#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    int num;
    cout<<"enter the value till you want to left rotate the array"<<endl;
    cin>>num;
    rotate(v.begin(),v.begin()+num,v.end());
    for(int x:v){
        cout<<x<<endl;
    }

}