#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int getSecondLargest(vector<int> &arr) 
{
        // code here
        int max_ele = INT_MAX ;
        sort(arr.begin(),arr.end()) ;
        int start = arr.size() - 1 ;
        int max_count = 0 ;
        while(start>=0)
        {
            if(max_count<2)
            {
                if(arr[start]<max_ele)
                {
                    max_ele = arr[start] ;
                    max_count++ ;
                }
            }
            else
            {
                return max_ele ;
            }
            
            start--;
            
        }
        
        if(max_ele==arr[arr.size() - 1])
        {
            return -1;
        }
        return max_ele ;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int result = getSecondLargest(arr);
}