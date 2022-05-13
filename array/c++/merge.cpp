#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={1,2,3,4,5,89,890};
    vector <int> v1={7,8,9,6,56};
    vector <int> v3(v.size()+v1.size());
       sort(v.begin(),v.end());
       sort(v1.begin(),v1.end());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());
    for(int x:v3){
        cout<<x<<endl;
    }
    return 0;
}