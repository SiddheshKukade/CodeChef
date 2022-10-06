#include <iostream>
using namespace std;

int main() {
	int n ; 
	cin>>n;
	int temp;
	for(int i=0 ; i<n ;i++){
	    cin>>temp;
	    if(temp>67 && temp<45000 ){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
