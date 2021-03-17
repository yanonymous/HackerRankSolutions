#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int x,y,z,q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    cin>>x>>y;
    if (x==1)
    s.insert(y);
    if(x==2)
    {
        s.erase(y);
    }
    if(x==3){set<int>::iterator a=s.find(y);
        if(a==s.end())
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }

    }

    return 0;
}

