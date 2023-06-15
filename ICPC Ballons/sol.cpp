#include <iostream>
using namespace std;
#include<vector>
int main() {
	// your code goes here
	int tt;
	cin>>tt;
	for(int i=0; i<tt;i++){
	    int n; cin>>n;
	    vector<int> a;
	    for(int j=0; j<n;j++){
	        int temp; 
	        std::cin >>temp ;
	        a.push_back(temp);
	    }
	    
	  for(int j=n-1; j>=0;j--){
	        if(a[j]<=7){
	               cout<<j+1<<endl;
	            goto cs;
	        }
	    }
	    	cs:;
	   // 	cout<<"sdfs"<<endl;
	}

	return 0;
}
