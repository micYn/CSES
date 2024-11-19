#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int max_len=0, len=1;
	char current = str[0];
	for(int i=1;i<str.length();i++){
		if(str[i]==current){
			len++;
		}
		else{
			current = str[i];
			if(len>max_len)	max_len = len;
			len = 1;
		}
	}
	if(len>max_len)	max_len = len;
	cout<<max_len;

	return 0;
}
