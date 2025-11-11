#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool apply_binary_search(int no , vector<int> v)
    {
        int start = 0 ;
        int end = v.size() - 1;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(v[mid] == no)
            {
                return true ;
            }
            else  if(no > v[mid])
            {
                start = mid + 1 ;
            }
            else
            {
                end = mid - 1 ;
            }
        }
        
        return false;
    }

int missingNumber(vector<int> &arr) 
{
        // code here
        sort(arr.begin(),arr.end());
        vector<int> nonneg;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i]>=0)
            {
                nonneg.push_back(arr[i]);
            }
        }
        
        if(nonneg.size() == 0)
        {
            return 1 ;
        }
        int max_no = nonneg[nonneg.size()-1];
        
        int st = 1 ;
        for( ; st <= max_no ; st++)
        {
            bool value = apply_binary_search(st,nonneg);
            if(!value)
            {
                return st ;
            }
        }
        
        return st;
    
}

int main()
{
   vector<int> arr = {-3 , 5 , 4  , 5 , 8 , 7 , 0 , 9} ;
   cout << "Missing No : " << missingNumber(arr) << endl;
}

