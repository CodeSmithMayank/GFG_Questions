#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool apply_binary_search(int no , vector<int>& arr)
{
            int start = 0 ;
            int end = arr.size() - 1 ;
            bool result = false;
            while(start<=end)
            {
                int mid = start + (end-start)/2 ;
                if(arr[mid] == no)
                {
                    return true ;
                }
                else if(no > arr[mid])
                {
                    start = mid + 1 ;
                }
                else
                {
                    end = mid - 1 ;
                }
            }
            
            return result ;
}

vector<int> rearrange(vector<int>& arr) 
{
        // Code here
        vector<int> result ;
        int start = 0 ;
        sort(arr.begin(),arr.end()) ;
        while(start<arr.size())
        {
            bool res = apply_binary_search(start,arr) ;
            if(res)
            {
                result.push_back(start) ;
            }
            else
            {
                result.push_back(-1) ;
            }
            
            start++ ;
        }
        
        return result ;
}

int main()
{
    vector<int> arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    rearrange(arr) ;
}