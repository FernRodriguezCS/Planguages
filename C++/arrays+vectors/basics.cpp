#include <iostream>
#include <vector>
using namespace std;

/*
 * WAYS TO DECALRE A VECTOR(COMMON)
 * 1.Empty Vector (dynamic fill)
 * 	vector <int> nums;
 * 2.Initialize With Values (most commmon)
 * 	vector <int> nums = {1,2,3,4};
 * 3.Fixed Size, All Zeros
 * 	vector <int> nums(5); -> [0,0,0,0,0]	
 * 4.Fixed Size With A Specific Value
 * 	vector <int> nums(5,-1); -> [-1,-1,-1,-1,-1]
 * WAYS TO DECALRE A VECTOR(SPECIFIC)
 * 5. Copy From Another Vector
 * 	vector <int> copy = nums;
 * 6. Using Itorators(e.g., part of another vector)
 * 	Grabs Elements at index 1 and 2
 * 	vector <int> part(nums.begin() +  1 , nums.begin() +  3)
 * 7. 2D Vector (matrix-style)
 * 	3  rows x 4 columns of 0s
 * 	vector<vector<int>> grid(3, vector<int>(4,0)); 
 */

/*
 * COMMON VECTOR FUNCTIONS
 * 1. push_back(x)
 * 	add to the end
 * 	nums.push_back(7) = [1,2,3,7]
 * 2. pop_back(x)
 * 	remove last element
 * 	nums.pop_back();
 * 3. size()
 * 	returns number of elements
 * 	int n = nums.size();
 * 4. empty()
 * 	Check if the vector is empty
 * 	if (nums.empty())
 * 5. clear()
 * 	Erase All Elements
 * 	nums.clear()
 * 6. front() / back()
 * 	Access first or last element
 * 	int first = nums.first()
 * 	int last = nums.back()
 * 7. at(index)
 * 	Access Element Safely (bounds checked)
 * 	int val = nums.at(2);
 * 8. insert(pos, val)
 * 	Insert at specific position
 * 	nums.insert(nums.begin() + 1, 99); -> insert 99 at index 1
 * 9. erase(pos)
 * 	remove at specific position
 * 	can erase multiple positions. 
 * 	nums.erase(nums.begin() + 1); -> remove element as index 1
 * 10. sort()
 * 	sort the vector (use with #include <algorithm>)
 * 	sort(nums.begin(), nums.end());
 * 11. reverse()
 * 	reverse(nums.begin(), nums.end());
 * 12. find()
 * 	returns an iterator
 * 	if(find(nums.begin(), nums.end(), 5) != nums.end()){
 *		coutt << "Found";
 * 	}
 * 13. 2D Vector Access
 * 	vector<vector<int>> grid(3, vector<int>(4,0));
 * 	int x = grid[1][2]; -> row 1 col 2
 * 14. PRO TIP:
 * 	Vectors are passed by value by default - copy-heavy. Pass by reference to save time
 * 	void modify(vector <int> &nums){
 *		nums.push_back(999);
 * 	}
 * */


/*
 * STRINGS
 * 1.  Declare and Initialize 
 * 	string s = "hello";
 * 2. Concatenate
 * 	string full = "leet" + "code";
 * 3. Substring 
 * 	string sub = s.substr(1,3); -> from index 1, take 3 chars -> "ell"
 * 4. Search
 * 	int pos = s.find("ell"); -> returns index 1
 * 5. Compare
 * 	if(s = "hello") -> returns true
 * 6. Sort a String
 * 	sort(s.begin(), s.end()) -> rearranges letters alphabetically
 * 7. Erase
 * 	Removes count characters starting from index
 * 	string s = "abcdef";
 * 	s.erease(2,2); -> removes 'c' and 'd' -> "abef"
 * 	
 *
 * NOTES:
 *  -Strings specifically hold chars
 *  -Need #include <string>
 *  -Can use .size() or .length()
 *  -Can use push_back(char) -> NOTE: CANNOT EXCEPT STRING WATCH FOR THAT ERROR and pop_back()
 *  -Can do direct comoparisons such as ==, <, > 
 *  -Loop through using for (char c : str) -> char c in string
 *
 */
int main(int argc, char* argv[]){

	/*
	 *
	 * argc & argv
	 * What is argc?
	 * -(argument count) is an int that stores the number of command line arguments passed 
	 *  to the main function -> also includes the count for the name of the program
	 *
	 * What is argv?
	 * -(argument vector) is an array f c-style strings like ('char*') where every element
	 *  points to a command line argument. 
	 *  NOTE: argv does NOT store the actual argument, but the pointer to that argument.
	 * -The argv[0] will always contain the name of the program
	 *
	 * SITE: https://www.geeksforgeeks.org/command-line-arguments-in-cpp/
	 */
	
	cout << endl;	
	cout << "You have entered " << argc << " arguments." << endl;
	// using a while loop to iterate through arguments
	int j = 0;
	while(j < argc){
		cout << "Argument " << j << ": " << argv[j] << endl;
		j++;
	}	

	vector <int> nums = {1,2,3,4,5};
	// before anything happens
	cout << endl;
	cout << "Origional Vector: ";
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	cout << endl;

	// work/tests go here
	cout << "After Changes: ";
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	cout << endl;
	cout << endl;

	return 0;
}
