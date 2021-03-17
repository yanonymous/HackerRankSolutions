#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ele,i;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

