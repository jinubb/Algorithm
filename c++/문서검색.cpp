#include<iostream>
#include<string>
using namespace std;
int main(void){
	string str;  // ��ü ���ڿ� 
	getline(cin,str);
	
	string target;  //ã�� �ܾ� 
	getline(cin,target);
	
	int target_length = target.length();  // ã�� �ܾ��� ���� ���� 
	int cnt=0; // ã�� �ܾ��� Ƚ�� ī��Ʈ 
	while(1){
		if(str.find(target) != string::npos){   // ã�� �ܾ ��ü ���ڿ��� �����Ѵٸ� 
			cnt++;
			str = str.substr(target_length+str.find(target));
		}
		else{
			cout << cnt;
			break;
		}
	}
/*	if(str.find(target) != string::npos){
		cout << "Ž���Ϸ�";
		str=str.substr(target_length);
		str.operator[0]="\0";
	}
	printf("%c",str[0]);
	
	*/
	return 0;
}
