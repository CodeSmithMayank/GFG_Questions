#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int s = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i]<=x)
            {
                s++;
            }
        }
        return s;
    }

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int result = countOfElements(5,arr);
}