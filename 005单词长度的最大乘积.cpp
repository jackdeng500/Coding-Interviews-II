#include<all_include.h>
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ansMax = 0;
        vector<int> bitMap;
        for(int i=0;i<words.size();i++){
            int bitTemp = 0;
            for(int j=0;j<words[i].size();j++){
                bitTemp |=( 1 << words[i][j] -'a');
            }
            bitMap.push_back(bitTemp);
        }
        for(int i=0;i<bitMap.size();i++){
            for(int j=i+1;j<bitMap.size();j++){
                if((bitMap[i]&bitMap[j]) == 0 ){
                    if(ansMax < words[i].size()*words[j].size()) 
                        ansMax = words[i].size()*words[j].size();
                }
            }
        }
        return ansMax;
    }
};