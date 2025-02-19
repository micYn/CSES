#include <iostream>
using namespace std;
int main(){
	int zeros = 0;
	int n;
	cin>>n;
	// for(int j=2;j<=n;j++){
	// 	int i = j;
	// 	while(i%2==0){
	// 		twos++;
	// 		i/=2;
	// 	}
	// 	while(i%5==0){
	// 		fives++;
	// 		i/=5;
	// 	}
	// }
	// if(twos>0 && fives>0){
	// 	if(twos==fives){
	// 		zeros += twos;
	// 	}
	// 	else if(fives > twos){
	// 		zeros += twos;
	// 	}
	// 	else{
	// 		zeros += fives;
	// 	}
	// }
	/*
	While the implementation above gives correct outputs, it is still very slow for large inputs.
	Note that the number of twos is always greater or equal to that of fives, 
	so we can just count the number of fives and serve it as answer. 
	*/
	for(int i=5;i<=n;i*=5){
		zeros += n/i;
	}
	cout<<zeros<<endl;

	return 0;
}