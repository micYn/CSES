/*1 1
1 2
2 2
2 1
3 1
3 2
3 3
2 3
1 3
1 4
2 4
3 4
4 4
4 3
4 2
4 1
5 1
5 2
5 3
5 4
5 5
4 5
3 5
2 5
1 5
----------
*/
#include <iostream>
using namespace std;
int main(){
	int testcase;
	long long x,y;
	cin>>testcase;
	while(testcase--){
		cin>>x>>y;
		if(x==y)	cout<<x*x-(x-1)<<endl;
		else if(x>y){
			if(x%2==0){
				cout<<x*x-(x-1)+(x-y)<<endl;
			}
			else{
				cout<<x*x-(x-1)-(x-y)<<endl;
			}
		}
		else{
			if(y%2==0){
				cout<<y*y-(y-1)-(y-x)<<endl;
			}
			else{
				cout<<y*y-(y-1)+(y-x)<<endl;
			}
		}
	}
	return 0;
}
		
		
