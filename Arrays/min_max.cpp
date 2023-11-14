#include <iostream>
#include <climits>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0; i < N; i++){
            // if(A[i] < mini){
            //     mini = min(A[i], mini);
            // }
            mini = min(A[i], mini);
            maxi = max(A[i], maxi);
        }
    	//code here.
    	return (mini + maxi);
    }

};