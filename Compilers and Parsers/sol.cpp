#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s ;
	cin>>s;
	long int i, cnt=0;
	long int x=0;
	for(int i=0;i<s.length();++i){
	    if(s[i] == '<'){
	        x++;
	    }
	    else{
	        x--;
	        if(x<0){ 
	            break; // string finished.
	        }
	    }
	    if(x ==0) 
	        cnt  = i+1; /// length of valid prefix 1 based index for that +1 is there
	}
	cout<<cnt<<endl;
	return 0;
}
