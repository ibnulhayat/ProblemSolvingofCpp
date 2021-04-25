#include<iostream>
#include<string>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] == val){
			nums.erase(nums.begin()+i);
			i--;
		}
	}
	return nums.size();
}



int main(){
	
	return 0;
}
