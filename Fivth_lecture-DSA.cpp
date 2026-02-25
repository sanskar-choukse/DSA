#include <bits/stdc++.h>
using namespace std;
int main(){
//Q Bitwise operator
//.AND
//.OR
//.NOT
//.XOR
//e.g
	int a=4;
	int b=6;
	
	cout<<"a&b"<<(a&b)<<endl;
	cout<<"a|b"<<(a|b)<<endl;
	cout<<"~a"<<~a<<endl;
	cout<<"a^b"<<(a^b)<<endl;
	
//	Q.SHIFT
//RIGHT SHIFT(>>)
//LEFT SHIFT(<<)
//	E.g=>
	cout<<(12>>1)<<endl;
	cout<<(17>>2)<<endl;
	cout<<(19<<1)<<endl;
	cout<<(19<<2)<<endl;
	
Q. //	decrement/increment operator
  //	.pre/post 
#include <bits/stdc++.h>
using namespace std;
int main(){
	
int i=7;
cout<<(++i);
cout<<(i++);
cout<<(--i);
cout<<(i--);
}

//MCQUES QUESTION
Q.int a,b=1;
a=10;
if(++a)
cout<<b;
else
cout<<++b;

Q.int a=1;
int b=2;

if(a-- >0 && ++b>2){
	cout<<"stage1 - inside if";
}else{
	cout<<"stage2 - inside else";
}
cout<<a<<" "<<b<<endl;

//O/P=stage1 - inside if 0 3

Q.int a=1;
int b=2;

if(a-- >0 || ++b>2){
	cout<<"stage1 - inside if";
}else{
	cout<<"stage2 - inside else";
}
cout<<a<<" "<<b<<endl;

//first condition he true ho gye to B per jane need nahi ha isliye bB ke value 2 print huy 
//O/P=stage1 - inside if 0 2

Q.int number=3;
cout<<(25*(++number));

//O/P=100

Q.int a=1;
int b=a++;
int c=++a;
cout<<b<<endl;
//b=1 then 2
cout<<c;
//c=++2,c=3 Then 3
//O/P=1,3
}

//fibonacci series
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

 int a=0;
 int b=1;
 cout<<a<<" "<<b;
 int i;
 for(int i=1;i<=n;i++){
    int nextnumber=a+b;
    cout<<nextnumber<<" ";
    
    a=b;
    b=nextnumber;
 }
}

*MCQS
#include <bits/stdc++.h>
using namespace std;
int main(){
int i;
for (int i=0;i<=15;i+=2){
    cout<<i<<" ";
    if(i&1){
    	continue;
	}
    i++;
 }
}
//o/p=>0 3 5 7 9 11 13 15 

#include <bits/stdc++.h>
using namespace std;
int main(){
int i;
for (int i=0;i<=5;i++){
   cout<<i;
    i++;
 }
}
//o/p=0,2,4

#include <bits/stdc++.h>
using namespace std;
int main(){

int i;
for (int i=0;i<=5;i--){
   cout<<i;
    i++;
 }
}
//O/P=>0(infenite)

//Q.
#include <bits/stdc++.h>
using namespace std;
int main(){

for (int i=0;i<5;i++){
	for(int j=i;j<=5;j++){
		cout<<i<<" "<<j<<endl;
  }
 }
}
//O/P
//=>0 0
//0 1
//0 2
//0 3
//0 4
//0 5
//1 1
//1 2
//1 3
//1 4
//1 5
//2 2
//2 3
//2 4
//2 5
//3 3
//3 4
//3 5
//4 4
//4 5

//Q.
#include <bits/stdc++.h>
using namespace std;
int main(){


for (int i=0;i<5;i++){
	for(int j=i;j<=5;j++){
		if(i+j==10){
			break;
		}
		cout<<i<<" "<<j<<endl;
  }
 }
}
//O/P
//=>0 0
//0 1
//0 2
//0 3
//0 4
//0 5
//1 1
//1 2
//1 3
//1 4
//1 5
//2 2
//2 3
//2 4
//2 5
//3 3
//3 4
//3 5
//4 4
//4 5

//***Q..give an integer number n,return the difference between 
//the product of its digit and the sum of its digit.

#include <bits/stdc++.h>
using namespace std;

int main(){
int product=1;
int sum=0;
int n;
cin>>n;
while(n!=0){
//	234%10=4(remainder) then
//23/10=3(remainder) then
//2/10=2(remainder)
	int digit= n%10;
	product=product*digit;
	sum=sum+digit;
	
	n=n/10;
}
int result=product-sum;
cout<< result;
}


