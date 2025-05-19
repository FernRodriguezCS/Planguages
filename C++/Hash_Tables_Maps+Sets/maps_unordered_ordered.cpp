// compile with: g++ -std=c++11 maps_unordered_ordered.cpp -o maps && ./maps
#include <vector>
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

/*
 * Declaring Unordered/Ordered Map
 * 	Unordered_map<string, int> mp;
 * 	map<string, int> mp;
 *
 * Common Functions
 * 1. Insert or Update Key-value pair
 * 	mp["apple"] = 3;
 * 2. Access value by key
 * 	int val = mp["apple"]; -> returns 3
 * 3. count(key)
 * 	checks if a key exist
 * 	if(mp.count("apple")) -> {exists}
 * 4. erase(key)
 * 	Remove a key-value pair
 * 	mp.erease("apple");
 * 5. size()
 * 	Get number of key-value pairs
 * 	int n = mp.size();
 * 6. empty()
 * 	Check if map is empty
 * 	if(mp.empty()) -> {}
 * 7. clear()
 * 	Remove all entries
 * 	mp.clear()
 * 8. find(key)
 * 	Returns an iterator (used to avoid inserting by mistake)
 * 	if(mp.find("apple") != mp.end()){
 *		cout << mp["apple"];
 * 	}
 * 9. Loop through map
 * 	for(auto& p : mp){
 *		cout << p.first << " -> " << p.second;
 * 	}
 *
 * */

// EX: 1 Count frequency
unordered_map<int, int> countFrequency(vector<int>& nums){ // this function will return an unordered map
	unordered_map<int, int> mp; // initialize unordered map called mp which will have an int key and int value pair
	for(int num : nums){
		mp[num]++; // in our mp unordered map for each num in nums we add 1 to that specific keys value
		cout << num << " -> " << mp[num] << endl;
	}
	return mp;
}

// EX 2: First Unique element
int firstUnique(vector<int>& nums){
	unordered_map<int, int> tracker; // initialize unordered map to track occurences
	for(int num : nums){
		tracker[num]++;
		cout << "Value: " << num << " -> Occurences: " << tracker[num] << endl; 
	}
	for(int num : nums){ // go through initial nums vector to find first element with only one unique value
		if(tracker[num] == 1){ 
			return num; // this is the first one with the unique element in nums vector
		}
	}
	return -1; // meaning there are no unique values inside the vector
}

int main(){
	// vector<int> nums = {1, 3, 3, 5, 1, 3, 7}; // For Example 1
	vector<int> nums = {4, 5, 1, 2, 0, 4, 5, 2}; // For Example 2
	// countFrequency(nums);
	firstUnique(nums);
	return 0;
}
