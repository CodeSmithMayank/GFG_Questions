#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) 
{
        // code here
        sort(arr.begin(),arr.end());
        vector<int> r;
        int c = 0;
        int i = 0;
        int e = arr.size();
        int fe = arr[0];
        while(i<e)
        {
            if(arr[i]==fe)
            {
                c++;
            }
            else
            {
                if(c>=2)
                {
                    r.push_back(arr[i-1]);
                }
                
                c=1;
                fe=arr[i];
            }
            i++;
        }
        
        if(c>=2)
        {
            r.push_back(arr[i-1]);
        }
        return r;
}

int main()
{
    vector<int> arr{2, 3, 1, 2, 3};
    findDuplicates(arr);
}