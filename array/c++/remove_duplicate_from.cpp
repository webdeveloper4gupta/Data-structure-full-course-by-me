// here i remove duplicate from the vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5,6,7,8,9,10,23,1,2,3};
    sort(v.begin(),v.end());
    vector<int>::iterator itr;
    itr=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),itr));
    for(int x:v){
        cout<<x<<endl;
    }


}