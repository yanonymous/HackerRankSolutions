#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,aa,bb;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    aa=a;
    aa[0]=b[0];
    bb=b;
    bb[0]=a[0];
    cout<<aa<<" "<<bb;
    return 0;
}

