//mine calculater
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cout<<"enter the value first";
	cin>>a;
	
	int b;
	cout<<"enter the value second";
	cin>>b;
	
	char operation;
	cout<<"enter the operation =>";
	cin>>operation;
	
	
	switch(operation){
		case '+':cout<<(a+b)<<endl;
		break;
		
		case '-':cout<<(a-b)<<endl;
		break;
		
		case '*':cout<<(a*b)<<endl;
		break;
		
		case '%':cout<<(a%b)<<endl;
		break;
		
		case '/':cout<<(a/b)<<endl;
		break;
		
		default:cout<<"check the value";
		break;
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cout<<"enter the value first";
	cin>>a;
	
	int b;
	cout<<"enter the value second";
	cin>>b;
	
	char operation;
	cout<<"enter the operation =>";
	cin>>operation;
	
	
	switch(operation){
		case '+':cout<<(a+b)<<endl;
		         cout<<(a*b)<<endl;
				 cout<<(a/b)<<endl;
				 cout<<(a%b)<<endl;
		break;
		
		case '-':cout<<"start substract";
		        cout<<(a-b);
				cout<<(a+b);
				cout<<(a*b);
				cout<<(a/b);
				cout<<(a%b)<<endl;
		        break;
		
		case '*':cout<<(a*b);
		         cout<<(a-b);
				 cout<<(a+b);
				 cout<<(a%b)<<endl;
		         break;
		
		case '%':cout<<(a%b);
		         cout<<(a*b);
		         cout<<(a-b);
				 cout<<(a+b)<<endl;
	         	 break;
		
		case '/':cout<<(a/b);
		         cout<<(a%b);
		         cout<<(a*b);
		         cout<<(a-b);
				 cout<<(a+b)<<endl;
		         break;
		
		default:cout<<"check the value";
		break;
	}
}

//calculates the number of ?100, ?50, ?20, and ?10 notes to make a total of ?1330:
#include <iostream>
using namespace std;

int main() {
    int total = 1330;
    int amountLeft = total;
    int hundreds = 0, fifties = 0, twenties = 0, tens = 0;

    switch (total) {
        case 1330:
            hundreds = amountLeft / 100;
            amountLeft %= 100;
            
            fifties = amountLeft / 50;
            amountLeft %= 50;
            
            twenties = amountLeft / 20;
            amountLeft %= 20;
            
            tens = amountLeft / 10;
            amountLeft %= 10;
            
            break;
        
        default:
            cout << "Invalid amount!" << endl;
    }

    cout << "For the total amount of ?" << total << ":" << endl;
    cout << "?100 notes: " << hundreds << endl;
    cout << "?50 notes: " << fifties << endl;
    cout << "?20 notes: " << twenties << endl;
    cout << "?10 notes: " << tens << endl;

    return 0;
}

//	pow(a,b) using loop but not good for multipule power
#include <bits/stdc++.h>
using namespace std;
int main(){
//	pow(a,b) 
	int a;
	cout<<"a:";
	cin>>a;
	int b;
	cout<<"b:";
	cin>>b;
	
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	 cout<<"a^b"<<":";
     cout<<ans<<endl;
     
     int c;
     cout<<"c:";
     cin>>c;
     int d;
     cout<<"d:";
     cin>>d;
     
     ans=1;     
     for(int i=1;i<=d;i++){
     	ans=ans*c;
	 };
	 cout<<"c^d"<<":";
	 cout<<ans;
	 
	 
	 return 0;
}

//	pow(a,b) using function this is not good power method
#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	
	int answer=power(a,b);
	cout<<answer;
	return 0;
}

//Function sort method//
#include <bits/stdc++.h>
using namespace std;
int power(){
	int a,b;
	cin>>a>>b;
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}
int main(){
	
	cout<<power();
	return 0;
}


//Check the value is even and odd
#include <bits/stdc++.h>
using namespace std;
bool check(int num){
//	odd
if(num&1){
	return 0;
}
else{
//	even
return 1;
}

}
int main(){
	int num;
	cin>>num;
	
if(check(num)){
	cout<<"number is even"<<endl;
}	
else{
	cout<<"number is odd"<<endl;
}
return 0;
}


//void function
//void that is not a given return  direct value function me print te ha
#include <bits/stdc++.h>
//FUNCTION Signature
using namespace std;
//fun
void countprint(int n){
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	
	countprint(n);
	return 0;
}

//check prime no
#include <bits/stdc++.h>
using namespace std;
//1<=prime no
//0<=not a prime no
//prime 2 se start hota ha and not equal to 0
bool isprime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int num;
	cin>>num;
	
	if(isprime(num)){
		cout<<"prime no";
	}
	else{
		cout<<"not prime";
	}
	return 0;
}


Q. prompts the user for a value of n and solves the expression 3n+7.
#include <iostream>
using namespace std;
// Function to solve the expression 3n + 7
int solveExpression(int n) {
    return 3 * n + 7;
}

int main() {
    int n;
    
    // Get input from the user
    cout << "Enter a value for n: ";
    cin >> n;
    
    // Call the function and display the result
    int result = solveExpression(n);
    cout << "The result of 3*" << n << " + 7 is: " << result << endl;
    
    return 0;
}


// Function to calculate Fibonacci number
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}


