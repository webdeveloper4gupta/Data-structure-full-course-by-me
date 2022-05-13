#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    vector<int> v1={1,2,3,4,8,6,4};
 
    // here i print wheather duplicate present or not
for(i=0;i<v1.size();i++){
    for(j=i+1;j<v1.size();j++){
        if(v1[i]==v1[j]){
            cout<<"duplicate found"<<endl;
            exit(0);
        }
    }
}
cout<<"not duplicate present in the vector"<<endl;

    return 0;
}