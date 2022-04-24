#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int> v={1,2,3,4,5,6,7};
   int k=*max_element(v.begin(),v.end());
   cout<<"maxium element in the array is"<<k<<endl;
}