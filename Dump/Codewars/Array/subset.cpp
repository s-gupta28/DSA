#include<iostream>
using namespace std;
#include<vector>

vector<vector <int>> subarray(vector<int> &arr){
    int size=arr.size();
    vector<vector <int>> ans;
    int n=(1<<size)-1;
    int k=0;
    int count=0;
    while(n>=0){
        
        vector <int> sub;
        count=0;
        
        while(count<size){
           
            if(n&(1<<count)){
                sub.push_back(arr[count]);
                
            }
            
            count=count+1;
            
        }
       
        ans.push_back(sub);
      
        n--;
    }


return ans;

}

vector<vector <int>> subarray1(vector<int> &arr){
    int size=arr.size();
    vector<vector <int>> ans;
    int n=0;
    
    int count=0;
    while(n<(1<<size)){
        
        vector <int> sub;
        
        
       for(int count=0;count<size; count++){
           
            if(n&(1<<count)){
                sub.push_back(arr[count]);
                
                
            }
             
        }
        
       
        ans.push_back(sub);
      
        n++;
    }


return ans;

}

int main(){

    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    ans=subarray1(arr);
    for(auto i: ans){
        for(int j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}