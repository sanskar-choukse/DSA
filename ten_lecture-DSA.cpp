//Problem statement:
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1

Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice,
 and the number 1 is present only once. So, the unique number in this array is 1.

#include <bits/stdc++.h>
using namespace std;
int findunique(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
}
int main(){
	int arr[7]={1,2,3,4,1,2,3};
	int size=7;
	
int result=findunique(arr,size);

cout<<result;
}


Q.2 Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true 
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

Q.3 You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer 
value that is present in the array twice.Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int size){
//	XOR int all array  element 
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	
//	XOR[1,size-1]
	for(int i=1;i<size;i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int arr[8]={1,2,3,3,4,5,6,7};
	int size=8;
	
	int result=duplicate(arr,size);
	
	cout<<result;
	return 0;
}

Q.4 Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer
 appears once or twice, return an array of all the integers that appears twice.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;  // We need to return a vector, so change ans to a vector
        
        // Iterate through each number in the array
        for(int i = 0; i < nums.size(); i++) {
            // Get the index corresponding to the value at nums[i] (adjusting for 1-based indexing)
            int index = abs(nums[i]) - 1;

            // If the value at nums[index] is negative, it means this number has been seen before
            if (nums[index] < 0) {
                ans.push_back(index + 1); // This is a duplicate, add to result
            } else {
                // Mark the value at nums[index] as negative to indicate we've seen this number
                nums[index] = -nums[index];
            }
        }

        return ans;  // Return the result vector containing duplicates
    }
};

