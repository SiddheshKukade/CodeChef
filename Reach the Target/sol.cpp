#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int x,y;
for(int i=0 ; i<n;i++){
   cin>>x>>y;
   cout<<abs(x-y)<<endl;
}
	return 0;
}
