#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    vector <int> v={1,2,3,4,5,56,6};
    vector <int>::iterator itr;
    itr=v.begin();
     
       int num;
       cout<<"enter the number you want to insert the data in the vector"<<endl;
       cin>>num;
       
       for(int x:v){
           itr++;
           if(x>num){
               v.insert(itr-1,num);
               break;
           }
       }
       if(itr==v.end()){
           v.insert(itr,num);
       }
       cout<<"here i print ther vector"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }
}