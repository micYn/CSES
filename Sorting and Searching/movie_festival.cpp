#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> pi;

int main(){
	int n; cin>>n;
	vector<pi> v;
	while(n--){
		int tmp1, tmp2;
		cin>>tmp1>>tmp2;
		v.push_back({tmp2, tmp1});
	}
	
	sort(v.begin(), v.end());

	int cnt = 1;
	int endtime = v[0].first;
	for(auto it = v.begin()+1; it!=v.end(); it++){
		if((*it).second >= endtime){
			cnt++;
			endtime = (*it).first;
		}
	}
	cout<<cnt<<endl;

	return 0;
}