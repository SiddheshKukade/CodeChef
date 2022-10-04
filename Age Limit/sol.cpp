#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int age, upper ,lower;
    for(int i=0 ; i<n; i++){
        cin>>lower>>upper>>age;
        
        if(age<upper && age>=lower){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl; 
        }
    }
	return 0;
}
