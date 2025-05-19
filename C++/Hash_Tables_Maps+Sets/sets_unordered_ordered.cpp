// compile with: g++ -std=c++11 sets_unordered_ordered.cpp -o sets && ./sets
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

/*
 * Declare a Set
 * 	unordered_set<string> st;
 * 	set<string> st;
 *
 * FUNCTIONS
 * 1. insert(value)
 * 	Add a value to the set
 * 	st.insert("apple");
 * 2. count(value)
 * 	Check if value exists
 * 	if(st.count("apple")) -> will return 0 or 1
 * 3. erase(value)
 * 	Remove value from set
 * 	st.erase("apple");
 * 4. size()
 * 	Get number of elements
 * 	int n = st.size()
 * 5. empty()
 * 	Check if set is empty
 * 	if(st.empty()) -> { }
 * 6. clear()
 * 	st.clear()
 * 7. find(value)
 * 	Returns an iterator to value or st.end()
 * 	if(st.find("apple") != st.end()){
 *		cout << "Found it!";
 * 	}
 * 8. Loop through set
 * 	for(auto& val : st){
 *		cout << val;
 * 	}
 * */

// Ex 1: check if vector has duplicates using hash set
bool containsDuplicate(vector<int> &nums)
{
	unordered_set<int> seen; // unordered set to check values we've "seen"
	for (int num : nums) // loop through nums with num variable
	{
		if (seen.count(num)){ // checks if current num from nums is in seen
			cout << "Duplicate found in nums and the duplicate is " + to_string(num) << endl;
			return true;
		}
			seen.insert(num); // otherwise insert the num into seen
		
	}
	cout << "No Duplicates found in nums";
	return false;
}

int main()
{
	vector<int> nums = {1, 3, 5, 7, 3};
	containsDuplicate(nums);	
	return 0;
}