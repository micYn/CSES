#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num==1){
		cout<<"1";
	}
	else if(num==2||num==3){
		cout<<"NO SOLUTION";
	}
	else{
		int i=2;
		while(i<=num){
			cout<<i<<" ";
			i+=2;
		}
		i = 1;
		while(i<=num){
			cout<<i<<" ";
			i+=2;
		}
	}
	return 0;
}
