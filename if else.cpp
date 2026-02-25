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

//wirite a program if age >=18 print a adult and age <18 so print a not adult (program)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age>=18){
		cout<<"you are adult";
	}
	else if(age<10){
		cout<<"you are not adult";
	}
}

//If marks are less than 25, it prints "Grade: F."
//If marks are between 25 and 44 (inclusive), it prints "Grade: E."
//If marks are between 45 and 49 (inclusive), it prints "Grade: D."
//If marks are between 50 and 59 (inclusive), it prints "Grade: C."
//If marks are between 60 and 69 (inclusive), it prints "Grade: B."
//If marks are 70 or higher, it prints "Grade: A."
//If marks are outside the valid range, it prints "Invalid marks entered."

#include <bits/stdc++.h>
using namespace std;
int main(){
	int marks;
	cin>>marks;
	if(marks<25){
		cout<<"F";
	}
	if(marks>=25 && marks<=44){
		cout<<"E";
	}
	if(marks>=45 && marks<=49){
		cout<<"D";
	}
	if(marks>=50 && marks<=59){
		cout<<"C";
	}
	if(marks>=60 && marks<=79){
		cout<<"B";
	}
	if(marks>=80 && marks<=100){
		cout<<"A";
 	}
 	else{
 		cout<<"invalid value";
	 }
}
