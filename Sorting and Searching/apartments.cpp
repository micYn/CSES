#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num_applicants, num_apartments, diff;

	cin>>num_applicants>>num_apartments>>diff;

	vector<int> applicants_desire(num_applicants);
	vector<int> apartments_size(num_apartments);

	for(int i=0;i<num_applicants;i++){
		cin>>applicants_desire[i];
	}
	for(int i=0;i<num_apartments;i++){
		cin>>apartments_size[i];
	}

	sort(applicants_desire.begin(), applicants_desire.end());
	sort(apartments_size.begin(), apartments_size.end());

	int ans = 0;
	for(int i=0,j=0; i<num_applicants&&j<num_apartments;){
		if(apartments_size[j]-applicants_desire[i]+diff < 0){
			j++;
		}
		else if(apartments_size[j]-applicants_desire[i]-diff > 0){
			i++;
		}
		else{
			ans++;
			i++;
			j++;
		}
	}

	cout<<ans<<endl;

	return 0;
}