#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cin>>n;
    for (int i = 0; i < n; i++) {
     cin>>a>>b;
     if(a>b){
         cout<<"A"<<endl;
     }else{
         cout<<"B"<<endl;
     }
    }
	return 0;
}
