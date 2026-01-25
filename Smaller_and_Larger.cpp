#include<iostream>
#include<vector>
using namespace std;

vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        vector<int> r;
        int min_e = 0;
        int max_e = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i]<=target)
            {
                min_e++;
            }
            if(arr[i]>=target)
            {
                max_e++;
            }
        }
        r.push_back(min_e);
        r.push_back(max_e);
        return r;
    }

int main()
{
    vector<int> arr{1, 5, 8, 12, 12, 12, 19};
    vector<int> r = getMoreAndLess(arr,12);
}