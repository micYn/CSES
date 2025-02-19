#include <iostream>
using namespace std;
int main(){
	int length=0;
	long long ans=0;
	cin>>length;
	long long* arr;
	arr = new long long[length];
	for(int i=0;i<length;i++){
		cin>>arr[i];
	}
	for(int i=1;i<length;i++){
		if(arr[i-1]-arr[i]>0){
			ans+=arr[i-1]-arr[i];
			arr[i] = arr[i-1];
		}
	}
	cout<<ans;
	
	return 0;
}
