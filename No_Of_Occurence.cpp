#include<iostream>
#include<vector>
using namespace std;

int countFreq(vector<int>& arr, int target) 
{
        // code here
        int ele_count = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i]==target)
            {
                ele_count++;
            }
        }
        return ele_count;
}

int main()
{
    vector<int> v = {1,2,3,4,4,4,5};
    countFreq(v,4);
}