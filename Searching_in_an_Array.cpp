#include<iostream>
#include<vector>
using namespace std;

int search(int k, vector<int>& arr) 
{
        // code here
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i]==k)
            {
                return i+1;
            }
        }
        return -1;
}

int main()
{
    vector<int> arr {9, 7, 16, 16, 4};
    search(16,arr);
}