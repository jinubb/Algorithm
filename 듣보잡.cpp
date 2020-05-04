#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(void){
	int n, m;
	cin >> n >> m;
	string temp_str;
	string str1 = " ";
	string str2;
	for(int i=0;i<n;i++){
		cin >> temp_str;
		getchar();
		str1+=temp_str;
		str1+=" ";
	}
	int len;
	int k=0;
	for(int i=0;i<m;i++){
		cin >> temp_str;
		len = temp_str.length();
		getchar();
		if(str1.find(temp_str)!=string::npos){
			if(str1.at(str1.find(temp_str)-1) == 32){
				if(str1.at(str1.find(temp_str)+len)==32){
//					cout << str1.at(str1.find(temp_str)-1) << endl;
//					cout << "mmmmmmmmm"<<str1.at(str1.find(temp_str)+len) <<"mmmmmmmmmm"<< endl;
//					cout << len << endl;
					str2+=temp_str;
					str2+=" ";
				}
			}
		}	
	}
	int num;
	int mode = 0;
	cout << str2;
	while(1){
		if(str2.at(0) == ' '){
//			num = str2.find(' ');
			str2=str2.substr(1); // 공백이 나온다면 공백제거 
			mode = 0;
		}
		else if (str2.at(0) <= 122 && str2.at(0) >=97){
			if(mode == 0){
//			num = str2.find(' '); // 문자열이 나온다면 공백 찾기 
			cout << str2.substr(0,num);
//			cout << num;
//			str2 = str2.substr(num+1);
			mode = 1;
			}
		}	
		else{
			break;
		}
	}

	return 0;
}
