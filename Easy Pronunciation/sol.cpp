#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ;
	cin>>n;
	for(int i=0; i<n;i++){
	    int x;
	    cin>>x;
	    string str;
	    cin>>str;
	    int count =0;
	    for(int i=0; i<x;i++){
	        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
	            count =0;
	        }else{
	            count++;
	            if(count == 4) break;
	        }
	    }
	     if(count == 4) {
	                cout<<"NO"<<endl;
	        }else
	        {
	             cout<<"YES"<<endl;
	       
	        }
	}
	return 0;
}
