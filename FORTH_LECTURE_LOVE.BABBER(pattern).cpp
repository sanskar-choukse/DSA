//***
//***
//***
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		
		int j=1;
		while(j<=n){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

//111
//222
//333
#include <bits/stdc++.h>
using namespace std;
int  main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
          cout<<i;
		  j=j+1;			
		}
		cout<<endl;
		i=i+1;
	}
	return 0;
}

//123
//123
//123
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
	int j=1;
	while(j<=n){
	cout<<j;
	j++;
}
cout<<"\n";
i++;
}
}

//321
//321
//321
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
	int j=1;
	while(j<=n){
	cout<<n-j+1;
	j++;
}
cout<<"\n";
i++;
}
}

//4444
//3333
//2222
//1111
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
	int j=1;
	while(j<=n){
	cout<<n-i+1;
	j++;
}
cout<<"\n";
i++;
}
}

//1 2 3
//4 5 6 
//7 8 9
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
int count=1;
while(i<=n){
	int j=1;
	while(j<=n){
		cout<<count<<" ";
		count=count+1;
		j++;
	}
	cout<<"\n";
    i++;
}
}

//*
//**
//***
//****	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<;
			j++;
		}
		cout<<endl;
		i++;
	}
}

//1
//12
//123
//1234
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<j ;
			j++;
		}
		cout<<endl;
		i++;
	}
}

//1
//22
//333
//4444
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i;
			j++;
		}
		cout<<endl;
		i++;
	}
}

//1
//2 3
//4 5 6 
//7 8 9 10
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	int count=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<count<<" ";
			count=count+1;
			j++;
		}
		cout<<endl;
		i++;
	}
}

//isme count wali value repeat hogi
//1
//2 3
//3 4 5
//4 5 6 7 
//5 6 7 8 9
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		int count=i;
		while(j<=i){
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;
		i++;
	}
}

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<i-j+1<<" ";
		j++;
	}
	cout<<endl;
	i++;
}
}

//   1
//  22
// 333
//4444
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<" ";
			space=space-1;
		}
		int column=1;
		while(column<=row){
			cout<<row;
			column++;
		}
		cout<<endl;
		row++;
	}
}

//       1
//     2 3
//   4 5 6
//7 8 9 10
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row=1;
	int count=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<" ";
			space=space-1;
		}
		int column=1;
		while(column<=row){
			cout<<count;
			count=count+1;
			column++;
		}
		cout<<endl;
		row++;
	}
}


//A A A A
//B B B B
//C C C C
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		char ch='A'+i-1;
		int j=1;
		while(j<=n){
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

//ABC
//ABC
//ABC
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch='A'+j-1;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

//ABC
//DEF
//GHI
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
char count='A';
while(i<=n){
	int j=1;
	while(j<=n){
		cout<<count;
		count=count+1;
		j++;
	}
	cout<<endl;
	i++;
 }
}

//A
//BB
//CCC
//DDDD
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
	int j=1;
	char ch='A'+i-1;
	while(j<=i){
		cout<<ch;
		j++;
	}
	cout<<endl;
	i++;
}
}

//DDDD
//CCC
//BB
//A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=n;
//	char count='A';
	while(i>=1){
		int j=1;
	    char ch='A'+i-1;
		while(j<=i){
			cout<<ch;
//			count=count+1;
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}


//A
//BC
//DEF
//GHIJ
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
char count='A';
while(i<=n){
	int j=1;
//	char ch='A'+i-1;
	while(j<=i){
		cout<<count;
		count=count+1;
		j++;
	}
	cout<<endl;
	i++;
}
}

//ABCD
//EFG
//HI
//J
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=n;
	char count='A';
	while(i>=1){
		int j=1;
		while(j<=i){
			cout<<count;
			count=count+1;
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}

//   *
//  **
// ***
//****
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<" ";
			space=space-1;
		}
		int column=1;
		while(column<=row){
			cout<<"*";
			column++;
		}
		cout<<endl;
		row++;
	}
}

//###*
//##**
//#***
//****
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<"#";
			space=space-1;
		}
		int column=1;
		while(column<=row){
			cout<<"*";
			column++;
		}
		cout<<endl;
		row++;
	}
}

//****
//***
//**
//*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=n;
	while(i>=1){
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}

//****
// ***
//  **
//   *
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=n;
	while(i>=1){
		int space=n-i;
		while(space){
			cout<<" ";
			space=space-1;
		}
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}

    1
   121
  12321
 1234321
123454321
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<space;
			space=space-1;
		}
		int column=1;
		while(column<=i){
			cout<<j;
			j++;
		}
		cout<<end;
	}
}


#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
//	first part
	int i=1;
	while(i<=n){
		int space=n-i;
		while(space){
			cout<<" ";
			space=space-1;
		}
//		second part
		 int j=1;
		 while(j<=i){
		 	cout<<j;
		 	j++; 
		 }
		 
//		 thirs part
		 int start=i-1;
		 while(start){
		 cout<<start;
		 start=start-1;
		 
     	}
     	cout<<endl;
		i++;
	}
	return 0;
}
