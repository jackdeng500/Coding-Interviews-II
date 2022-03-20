#include<all_include.h>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int it:nums){
            ++mp[it];
        }
        int res = 0;
        for(auto item:mp){
            if(item.second == 1){
                res = item.first;
            }
        }
        return res;
        // //COUNT[32] 空间复杂度O[1]
        // int count[32]={0};
        // for(auto &num:nums){
        //     for(int i=0;i<32;i++){
        //         count[i] += num & 1;
        //         num >>= 1;
        //     }
        // }
        // int res = 0, m = 3; 
        // for(int i=0;i<32;i++){
        //     res <<= 1;
        //     res |= count[31-i] % 3;
        // }
        // return res;
    }
};

int main(int argc, char** argv) {
	vector<string> words = {"1","2"};	
	for(auto i = words.begin();i!=words.end();i++){
        cout << *i << endl;
    }        
	return 0;
}