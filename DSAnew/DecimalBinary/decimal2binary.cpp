#include <iostream>
#include <iostream>

using namespace std;

int dec2bin(int n){
    int ans = 0;
    int p=1;
    
    while (n != 0)
    {
        if(n<0){
            n=-n;
            int bit = ~(n & 1);
            cout<<"bit"<<" "<<bit<<endl;
            n = n >> 1; //   n/2
            ans = (bit * p) + ans;
            p=p*10;

        }
        else{
            int bit = n & 1;
            n = n >> 1; //   n/2
            ans = (bit * p) + ans;
            p=p*10;
 
        }
        
    }

    if(n<0){
        ans;
    }
    else{
        return ans;
    }
    


}

int main()
{
    int n;
    cin >> n;
    cout<<dec2bin(n);}