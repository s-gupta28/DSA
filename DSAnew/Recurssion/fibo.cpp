#include<bits\stdc++.h>
using namespace std;
 
int getFibo(int n){
    if(n<2){
        return n;
    }

    return getFibo(n-1)+getFibo(n-2);
    
}


int main(){
    cout<<getFibo(4);
       

}