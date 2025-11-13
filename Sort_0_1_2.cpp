#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int>& arr) 
{
        // code here
        vector<int> zero;
        vector<int> one;
        vector<int> two;
        vector<int> res;
        for(int i = 0 ; i < arr.size() ;i++)
        {
            if(arr[i] == 0)
            {
                zero.push_back(0);
            }
            else if(arr[i] == 1)
            {
                one.push_back(1);
            }
            else
            {
                two.push_back(2);
            }
        }
        
        for(int i = 0 ; i < zero.size() ;i++)
        {
            res.push_back(0);
        }
        for(int i = 0 ; i < one.size() ;i++)
        {
            res.push_back(1);
        }
        for(int i = 0 ; i < two.size() ;i++)
        {
            res.push_back(2);
        }
        
        arr.clear();
        arr= res;
    }

int main()
{
    vector<int> arr{0,1,2,0,1,2};
    sort012(arr);
}