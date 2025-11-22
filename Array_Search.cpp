#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int x) 
{
        // code here
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(x == arr[i])
            {
                return i;
            }
        }
        return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4};
    search(arr,3);
}