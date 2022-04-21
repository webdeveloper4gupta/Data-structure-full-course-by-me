#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i,a;
    cout<<"enter the length of vector you want "<<endl;
    int length;
    cin>>length;
    for(i=0;i<length;i++){
        cout<<"enter the element"<<endl;
        cin>>a;
    v.push_back(a);
    }
    // v.pop_back();//deleting elemnt from last
    int index;
    cout<<"enter the index whoseelement you want to delete\n";
    cin>>index;
     vector<int>::iterator it=v.begin();
     v.erase(it+index);
    // after deleting the element 
    for(int x:v){
        cout<<x<<endl;
    }
cout<<"thank you visit again"<<endl;
}