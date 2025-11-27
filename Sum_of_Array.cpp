#include<iostream>
#include<vector>
using namespace std;

int arraySum(vector<int>& arr) 
{
        // code here
        int s = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            s+=arr[i];
        }
        return s;
    }

int main()
{
    vector<int> arr{1,2,3,4};
    arraySum(arr);
}