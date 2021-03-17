#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int n,q,k,temp,m;
      cin>>n>>q;
      vector<int> s[n];
      for(int i=0;i<n;i++)
      {
          cin>>k;
          for(int j=0;j<k;++j)
          {
              cin>>temp;
              s[i].push_back(temp);
          }
      }
     for(int i=0;i<q;++i)
     {
         cin>>m>>n;
         cout<<s[m][n]<<endl;
     }


    return 0;
}


