#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	vector<int> children_weight(n);
	for(int i=0;i<n;i++){
		cin>>children_weight[i];
	}
	// sort(children_weight.begin(), children_weight.end());
	
	float ans = 0;
	vector<int> smaller_part(0), bigger_part(0);
	int half_x = x/2;
	for(int w : children_weight){
		if(w<=half_x){
			smaller_part.push_back(w);
		}
		else{
			ans++;
			bigger_part.push_back(x-w);
		}
	}
	sort(smaller_part.rbegin(), smaller_part.rend());
	sort(bigger_part.rbegin(), bigger_part.rend());
	int i,j;
	for(i=0,j=0; i<(int)smaller_part.size()&&j<(int)bigger_part.size();){
		if(bigger_part[j]>=smaller_part[i]){
			j++; i++;
		}
		else{
			i++;
			ans += 0.5;
		}
	}
	for(;i<(int)smaller_part.size();i++){
		ans += 0.5;
	}

	cout<<(int)(ans+0.5)<<endl;

	return 0;
}