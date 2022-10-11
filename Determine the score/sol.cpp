int main() {
	int n,x,N,tc;
	cin>>n;
	
    for(int i=0 ;i<n;i++){
      cin>>x>>N;
      tc = x/10;
      cout<<tc*N<<endl;
    }
	return 0;
}
