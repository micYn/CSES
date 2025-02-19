#include <iostream>
using namespace std;
int main(){
	int t, a, b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b>a){
			int tmp = b;
			b = a;
			a = tmp;
		}
		if((a+b)%3==0 && a<=b*2){
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	}
}