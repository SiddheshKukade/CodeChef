#include <iostream>
using namespace std;

int main() {
	int n ;
	cin>>n;
	for (int i = 0; i < n; i++) {
	    int a,b;
	    cin>>a>>b;
	    int ans =(int) (a+b) /2; 
	    cout<<min(a,b)<<endl;
	}
	return 0;
}
