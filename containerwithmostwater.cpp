#include <iostream>
#include <vector>
using namespace std;

int maxwater(vector<int> arr)
{

    int low=0;
    int high=arr.size()-1;
    int ans=0;

    while (low<=high)
    {
        int val=min(arr[low],arr[high])*(high-low);
        ans=max(ans,val);
        
        if(arr[low]<=arr[high]){
            low+=1;
        }
        else{
            high-=1;
        }


    }
    return ans;

}
int main() {
    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxwater(arr);
}