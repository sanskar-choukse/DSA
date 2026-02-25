#include <bits/stdc++.h>
using namespace std;
//nested loop use where 2 condition is not satisified and most use() (else if)
int main(){
	int age;
	cin>>age;
	if(age<18){
		cout<<"not eligible for job";
	}
	else if(age<=57){
		cout<<"eligible fot job";
		if(age>=55){
			cout<<"but retirement soon";
		}
	}
	else{
		cout<<"retirement time";
	}
	return 0;
}
