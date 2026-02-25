#include <iostream>
using namespace std;
int main(){
	int number[13]={1,2,3};
	int n=13;
	for(int i=0;i<n;i++){
	cout<<number[i]<<"  "<<endl;
	}

char ch[15]={'a','b','c'};
//cout<<ch[0]<<ch[1];
int n=15;
for(int i=0;i<n;i++){
	cout<<ch[i]<<" ";
}


//MAX-MIN VALUE USING array 
#include <bits/stdc++.h>
using namespace std;
int getmin(int num[],int n){
	
int Min=INT_MAX;

for(int i=0;i<n;i++){
	if(num[i]<Min){
		Min=num[i];
	}
 }	
   
    //returning max value
	return Min;	
}

int getmax(int num[],int n){
	
int max=INT_MIN;

for(int i=0;i<n;i++){
	if(num[i]>max){
		max=num[i];
	}
 }	
   
    //returning max value
	return max;	
}

int main(){
	int size;
	cin>>size;
	
	int num[100];
    
//	taking input in array	
	for(int i=0;i<size;i++){
		cin>>num[i]; 
	}
	
	cout<<"maximum value is"<<getmax(num,size)<<endl;
	cout<<"minimum value is"<<getmin(num,size)<<endl;
    
    return 0;
} 


//scope=>update
#include <bits/stdc++.h>
using namespace std;
//arrgument
void update(int arr[],int n){

    cout<<"inside the function"<<endl;;	
    arr[0]=90;
	
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
    cout<<"going back to main function"<<endl;
}
int main(){
	int arr[3]={1,2,3};
	
	update (arr,3);
	
	cout<<"printing the main function"<<endl ;
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//sum the integer value using array with function
#include <iostream>
using namespace std;

// Function to calculate the sum of an array
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Initialize array with 5 values
    int arr[5] = {1, 4, 6, 9, 5};
    int size = 5;

    // Call the function to calculate sum
    int sum = calculateSum(arr, size);

    // Print the sum
    cout << "The sum of the array is: " << sum << endl;

    return 0;
}


//Linear search element
#include <bits/stdc++.h>
using namespace std;
bool Search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
//		check kya arr key ke equal ha
		if(arr[i]==key){
			return 1;
		}
	}
	return 0; 
}
int main(){
//	Linear search element
	int arr[10]={1,23,43,56,76,8,9,10,5,4};
	int size=10;
	
	cout<<"Enter the element to search for";
	int key;
	cin>>key;
	
   bool found=Search(arr,size,key);

	
	if(found){
		cout<<"key is present";
	}
	else{
		cout<<"key is not present";
	}
}




//Reverse element an array
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
int start=0;
int end=size-1;
while(start<=end){
	swap(arr[start],arr[end]);
	start++;
	end--; 
 } 
}
void printvalue(int arr[],int size){
	cout<<"Reverse value:";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[6]={1,34,56,78,98};
	int rdd[9]={1,2,3,4,5,6,7,8,9};
	
	
	reverse(arr,6);
	reverse(rdd,9);
	
	printvalue(arr,6);
	printvalue(rdd,9);
	
	return 0;
}


//swap alternate

#include <bits/stdc++.h>
using namespace std;
swap(even,8){
	for(int i=0;i<size;i+=2){
		swap(arr[i],arr[i+1]);
	}
}
printvalue(int even[],int size){
	for (int i=0;i<size;i++){
		cout<<arr[i];
	}
}
int main(){
	int even[8]={1,2,3,4,5,6,9,11};
	int odd[5]={4,6,8,9,11};
	
//	call function
swap(even,8);
printvalue(even,8);

swap(odd,5);
printvalue(odd,5);

return 0;
}
