#include <iostream>
using namespace std;

int main() {
	// your code goes here
int tt;
cin>>tt;
    for(int t=0; t<tt;t++){
        int maxarea = 0;
        int n,b,w,h;
        cin>>n>>b;
        
        for(int i=0; i<n;i++){
            int w,h,p;
            cin>>w>>h>>p;
            if(p > b) continue;
            int area = w*h;
            maxarea = max(area, maxarea);
            
        }
        if(maxarea==0){
            cout<<"no tablet"<<endl;
        }else{
        cout<<maxarea<<endl;
        }
    }
	return 0;
}
