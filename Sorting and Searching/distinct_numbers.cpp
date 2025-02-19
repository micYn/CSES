#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, tmp;
	vector<int> v(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout<<v.size()<<endl;

	return 0;
}