#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i, a,element;
    int length;
    cout << "enter the number of element you want to inser in the vector" << endl;
    cin >> length;
    for (i = 0; i < length; i++)
    {
        cout << "enter the " << i + 1 << "element of vector" << endl;
        cin >> a;
        v.push_back(a);
    }
    cout<<"enter the element you want to search\n";
    cin>>element;
    // int k=count(v.begin(),v.end(),element);//method1
    //  if(k!=0){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
    // method2
    vector<int>::iterator it=v.begin();
    it=find(v.begin(),v.end(),element);
    if(it!=v.end()){
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }
   
}
