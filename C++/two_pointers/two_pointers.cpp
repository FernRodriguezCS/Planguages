// Compile and run with: g++ -std=c++11 two_pointers.cpp -o two_pointers && ./two_pointers
#include <iostream>
#include <vector>
using namespace std;

/*
   TWO POINTERS
   MAIN CONCEPT: Two pointers involves using two variables
   (pointers) to iterate through data structure, usually an
   array or string, from either:
   1. Both ends inward (left / right)
   2. One leading ahead of the other (fast / slow)
   3. In tandem for window/sliding range problems

   WHEN TO USE:
   1. Sorted arrays/strings
   2. Finding paris/triplets with target sum
   3. Removing duplicates
   4. Reversing arrays or strings
   5. Merging sorted arrays
   6. Linked List problems(fast and slow)
   7. Palindromes

   KEY FUNCTIONS:
   sort(nums.begin(), nums.end()); -> useful before applying two pointers
   swap(nums[left], nums[right]); -> reversing / partitioning
   reverse(s.begin(), s.end()); -> built-in function
   isalpha(c)/isdigit(c) -> helps for string cleanup in palindrome checking
   */

void print_array(vector<int>& nums){
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
}

// Example of converging ponters -> seperate ends
bool isPalindrome(string s){
	string cleaned_string = "";

	// clean up string to lower case and skip non chars
	for (char c : s){
		if (isalnum(c)){
			cleaned_string += tolower(c);
		}
	}

	int left = 0, right = cleaned_string.size() - 1;
	while (left < right){
		if (cleaned_string[left] != cleaned_string[right]){
			cout << s << " is NOT a palindrome" << endl;
			return false;
		}
		left++;
		right--;
	}
	cout << s << " IS a palindrome" << endl;
	return true;
}

void removeDuplicates(vector<int>& nums){
	int left = 0, right = left + 1;
	while(right <= nums.size() -1){
		if(nums[left] != nums[right]){
			left++;
			swap(nums[left], nums[right]);
		}
		right++;
	}
}

int main(){
	// some palindromes 
	isPalindrome("racecar");
	isPalindrome("12321");
	cout << endl;
	// non plaindrome tests
	isPalindrome("palindrome");
	isPalindrome("Was it a car or a cat I saw?");
	cout << endl;

	// remove duplicates from array (no context)
	vector<int> numbers = {1,1,1,1,1,1,1,1,1,1,2};
	cout << "before duplicates removed:" << endl;
	print_array(numbers);
	cout << endl;
	cout << "After duplicates removed:" << endl;
	removeDuplicates(numbers);
	print_array(numbers);
	cout << endl << endl;
	return 0;
}


