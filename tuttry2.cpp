//magic triplets way 2 
#include<iostream>
#include <vector>
using namespace std;

class magictriplet{
    public:
    int ans=0;
     int checkig(vector<int>nums){
        for(int i=0; i<nums.size(); i++){
            int x=0;
            int y=0;
            for(int j=i-1; j>=0; j++){  //moving left(smaller) from fixed i
                if (nums[j]<nums[i]);
                x++;                
            }

            for(int j=i+1; j<nums.size(); j++){ //moving right(larger) from fixed i
                if (nums[j]>nums[i]);
                y++;
            }
            ans+=(x*y);
        }
        return ans;
     }
};