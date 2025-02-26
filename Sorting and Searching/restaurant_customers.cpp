#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> pi;

int main(){
	vector<pi> v;
	int n;
	cin>>n;
	while(n--){
		int tmp1, tmp2;
		cin>>tmp1>>tmp2;
		v.push_back({tmp1, 1});		// 1: arrival
		v.push_back({tmp2, 2});		// 2: leaving

	}
	sort(v.begin(), v.end());

	int cnt = 0;
	int best = -1;
	for(const pi& p : v){
		if(p.second == 1){
			cnt++;
			if(cnt > best)	best = cnt;
		}
		else{
			cnt--;
		}
	}
	cout<<best<<endl;


	return 0;
}