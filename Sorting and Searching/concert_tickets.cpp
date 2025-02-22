#include <iostream>
#include <vector>
#include <set>
// #include <algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	// vector<int> ticket_prices(n);
	// we use multiset instead of vector so we can get rid of vector erase(), which is O(n)
	// multiset erase() is O(logn)
	multiset<int> ticket_prices;	
	vector<int> customer_money(m);

	int price;
	for(int i=0;i<n;i++){
		// cin>>ticket_prices[i];
		cin>>price;
		ticket_prices.insert(price);	// O(logn) per insertion
	}
	for(int i=0;i<m;i++){
		cin>>customer_money[i];
	}
	
	// sort(ticket_prices.begin(), ticket_prices.end());
	// we don't need to sort if we use multiset, which is ordered

	for(int money : customer_money){
		// auto it = upper_bound(ticket_prices.begin(), ticket_prices.end(), customer_money[i]);
		auto it = ticket_prices.upper_bound(money);

		if(it == ticket_prices.begin()){
			cout<<"-1\n";
		}
		else{
			it--;
			cout<<*it<<endl;
			ticket_prices.erase(it);	// more efficient erase()
		}
	}

	return 0;
}