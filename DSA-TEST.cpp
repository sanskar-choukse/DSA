#include <bits/stdc++.h>
using namespace std;
int main(){
	char operation;
	cin>>operation;
	
	int a;
	cout<<"enter the value a";
	cin>>a;
	
	cout<<"enter the value b";
	int b;
	cin>>b;
	
switch(operation){
	case '+':cout<<(a+b);
	         break;
	         
    case '-':cout<<(a-b);
             break;
             
    default:cout<<"check the value";
    break;
}
}

