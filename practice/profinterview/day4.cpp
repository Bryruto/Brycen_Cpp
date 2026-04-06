#include <unordered_map>
#include <vector>
#include <iostream> 


std::vector<int> find_sum(std::vector<int>& nums,int& input){
    std::unordered_map<int,int>  map;

    for(int i{},target{};i<nums.size();i++){
        target = input - nums[i];
        if(map.find(target) != map.end()) return {target,nums[i]};
        map[nums[i]] = i;
    }

    return {};
}

void display(const std::vector<int>& arr){
    if(arr.size() != 2) return;
    std::cout << arr[0] << "+" << arr[1] << "=" << arr[0] + arr[1] << std::endl; 
}

int main(){
    std::vector<int> nums = {1,2,3,5,5,99,1,24,5,9,7,2};
    int input;
    std::cin >> input;

    display(find_sum(nums,input)); 
    std::cin >> input;
    display(find_sum(nums,input));
}
