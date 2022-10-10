#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int n;
	cin>>n;
	int X,N ,temp;
	for (int i = 0; i < n; i++) {
	   cin>>N>>X;
	   temp  = N*X;
	   if(temp %4 != 0 ){
	       cout<<(temp/4)+1<<endl;
	   }else{
	       cout<<temp/4<<endl;
	       
	   }
	   //cout<<floor(temp/4)<<endl;
	}
	return 0;
}
