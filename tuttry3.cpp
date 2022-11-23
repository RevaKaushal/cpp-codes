//Function to find a continuous sub-array which adds up to a given number.

#include <iostream>
#include<vector>
using namespace std;
//N=5 ,S=10 
//S means kaha se kaha tk ke elements ko sum kre taaki 10 bne 
//N=(1,2,3,4,5)  ,S= from 1st to 4th position(1+2+3+4=10)

int subarraysum(int arr[], int n ,int sum){
        int curr_sum, i,j;

        for (int i=0; i<n; i++){    //starting point
            curr_sum=arr[i];

            for(j=i+1; j<n; j++){   //trying all subarrays with i
                if(curr_sum==sum){
                    cout<<"the subarray to have the sum same as S is"<<i<<j-1;
                    return 1;
                }
                if(curr_sum>sum || j==n){  // ||--> OR operator [true if either or both are true]
                    break;                 // &&--> AND operator [true if both are true ]
                }
                curr_sum+= arr[i];
            }
        }
    printf("no subarray found");
    return 0;
}

     