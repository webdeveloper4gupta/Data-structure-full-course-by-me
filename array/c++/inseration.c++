#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    // here i create the vector iterator;
    vector<int>:: iterator it=v.begin();
    int element;
    cout<<"enter the element you want to insert"<<endl;
    cin>>element;
    
    v.insert(it+2,element);//here i insert third element in the array
    cout<<"print the element of the array"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }
}