#include<iostream>
#include<string>
using namespace std;
int main(void){
	string a;
	char b;
	string c;
	cin >> a>> b>> c;
	if(b=='+'){
		if(a==c){
			int num = a.size();
			a="2";
			for(int i=1;i<num;i++){
				a+="0";
			}
			cout << a;
		}
		else{
			if(a.size() > c.size()){
				int k= a.size() - c.size();
				a=a.substr(0,k); 
				a+=c;
				cout << a;
			}
			else{
				int k = c.size() - a.size();
				c=c.substr(0,k);
				c+=a;
				cout << c;
			}
		}
	}
	
	else{
		c=c.substr(1);
		cout << a+c;
	}
	return 0;
}
