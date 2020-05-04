#include<iostream>
#include<string>
using namespace std;
int main(void){
	string str;  // 전체 문자열 
	getline(cin,str);
	
	string target;  //찾는 단어 
	getline(cin,target);
	
	int target_length = target.length();  // 찾는 단어의 길이 저장 
	int cnt=0; // 찾는 단어의 횟수 카운트 
	while(1){
		if(str.find(target) != string::npos){   // 찾는 단어가 전체 문자열에 존재한다면 
			cnt++;
			str = str.substr(target_length+str.find(target));
		}
		else{
			cout << cnt;
			break;
		}
	}
/*	if(str.find(target) != string::npos){
		cout << "탐색완료";
		str=str.substr(target_length);
		str.operator[0]="\0";
	}
	printf("%c",str[0]);
	
	*/
	return 0;
}
