#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void){
	stack<int> st1;
	stack<int> st2;
	stack<int> st3;
		
	string str;
	str = 'not compare';
	string str2;
	str2 = '.';
	
	
	int mode = 0;
	int i=5;
	while(str.compare(str2)){
	getline(cin,str);
	if(!str.compare(str2)){
		mode = 2;
	}
	int num = str.length();
	for(int i=0;i<num;i++){
		if(str.at(i)=='['){
			st1.push(1);
			st3.push(1);
		}
		else if(str.at(i)==']'){
			if(st1.size()>=1){
				st1.pop();
				if(st3.top()!=1){
					mode = 1;
					break;
				}
				else{
					st3.pop();
				}
			}
			else{
				mode = 1;
				break;
			}
		}
		else if(str.at(i) == '('){
			st2.push(1);
			st3.push(2);
		}
		else if(str.at(i) == ')'){
			if(st2.size()>=1){
				st2.pop();
				if(st3.top()!=2){
					mode = 1;
					break;
				}
				else{
					st3.pop();
				}
			}
			else{
				mode = 1;
				break;
			}
		}
		else{
			continue;
		}
	}
	if(mode==2){

	}
	else if(mode == 1){
		cout  << "no" <<endl;
	}
	else if(st1.empty() && st2.empty() ){
		cout << "yes" << endl;
	}
	else{
		cout << "no" << endl;
	}
	mode = 0;
	while(!st1.empty()){
		st1.pop();
	}
	while(!st2.empty()){
		st2.pop();
	}
	while(!st3.empty()){
		st3.pop();
	}
	}
	return 0; 
	
}
