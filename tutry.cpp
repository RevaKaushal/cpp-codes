//MAGIC TRIPLETS :(1,2,3,4)-->a[0]<a[1]<a[2]<a[3] elements
//                (3,2,1)  -->no magic triplets 
//program to get total no. of pairs of magic triplets:look for logic on yt


#include <iostream>
#include <vector>
using namespace std;

class magictriplet{
    public:
     int counttriplet(vector<int>num){
            int finalcount=0;
            for(int i=1; i<num.size()-1 ;i++){
                int j=i-1,k=i+1, countsmall=0, countbig=0;
                int val=num[i];

                while(j>=0){ //count of small elements on left
                    if(num[j]<val){
                        countsmall++;
                    }
                    j++;
                }

                while(k<num.size()){//count of larger elementd on right
                    if (num[k]>val){
                        countbig++;
                    }
                    k++;
                }
                finalcount+=(countsmall*countbig);
            }

        return finalcount;   
     }
};

