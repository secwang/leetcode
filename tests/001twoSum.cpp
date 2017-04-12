#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <unordered_map>
#include <string>
#include <iostream>

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/


using namespace std;

class solution{
public:
    vector<int> twoSum (vector<int> &numbers, int target){
        unordered_map<int,int> m;
        vector<int> result;
        for(int i =0 ; i< numbers.size(); i++){
            if(m.find(numbers[i])==m.end()){
                m[target - numbers[i]] = i;
            }else{
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};

TEST_CASE( "simple pass", "[twoSum]" ) {
    solution s;
    vector<int> numbers ;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    int target = 6;

    vector<int> result =  s.twoSum(numbers,target);

    REQUIRE(result.size() == 2 );
    REQUIRE(result[0] == 2 );
    REQUIRE(result[1] == 4 );

}


