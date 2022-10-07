#include <iostream>
using namespace std;

int main() {
	int n=0 ; 
	cin>>n;
	int a,b,c;
	for(int i=0 ; i<n ;i++){
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	     cout<<"Setter"<<endl;
	    }else if (b>a && b>c ){
	        cout<<"Tester"<<endl;
	    }else  {cout<<"Editorialist"<<endl;}
	}	return 0;
}
