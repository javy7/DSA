#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> threesum(int arr[],int n){

    
    unordered_map<int,vector<int>> map;
    vector<vector<int>> ans;

    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            int val=-1*(arr[j]+arr[k]);

            if(map.find(val)!=map.end()){
                for(auto i:map[val]){
                ans.push_back({i,j,k});
            }
        }
        }
         map[arr[j]].push_back(j);
    }
   return ans;


}

int main(){
    int arr[]={0,4,1,-1,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<vector<int>> x = threesum(arr, n);

    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < x[i].size(); j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }



}