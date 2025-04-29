#include <iostream>
using namespace std;

// C = 5/9(F-32)


/* cout<<double(5)/9<<endl; 0.555556
    cout<<endl;
    cout<<float(5/9)<<endl; 0
    cout<<endl;
    cout<<(5/9)<<endl; 0*/ 

    
int main(){
    int c=1;
    double f;
    
    while(c==1){
        cout<<"Enter value in Fahrenheit"<<endl;
        cin>>f;
        double cel= double(5)/9 *(f-32) ;
        cout<<cel<<endl;
        cout<<"Want to continue ?"<<endl;
        cin>>c;
    }

}
   
