#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n;
cin>>n;
float rank;
int pgno;
for(int i=0 ; i<n;i++){
cin>>rank;
cout<<ceil(rank/25)<<endl;}
	return 0;
}
