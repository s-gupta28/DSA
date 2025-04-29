#include<bits\stdc++.h>
using namespace std;
//recurssion a function calls it self

// why recurssion?

//1. It helps us in solving bigger complex problem in simpler way
//2. You can convert recurssion solution <->iterative solution 

// first solve using recurssion then convert to iteration
//recurssion less optimised
//iteration more optimised

//3. Space complexity not constant becuase of recurssive call


//VVVVVVVV.I
//VISUALIZING RECURSION

//break it down to smaller formula
//BASE CONDN-  from the answer we already have
//eg F(0)=0 F(1)=1
// RECURSSION FORMULA
//when recursion wrote in formula
//recurssive tree


//VVVVVVVV.I
//How to understand and Approach a Problem

////break it down to smaller formula
// write RECURSSION FORMULA
// draw recurssive tree

// about the recusrrive tree
// list the sequence in which order the functions are called in tree
// see the flow of function show they are getting in stack
//Identity and focus on left tree calls then  right tree calls 

// Draw the tree and pointers againand again on
// PEN AN PAPER otherwise no understanding
//use the debugger to see the flow

// See how  the values are returned at each step
//See where the function call wil come out of
//in end you will come out of main function




// how to know the problem will be solved by recurssion
//when you break the problem into smaller problem



//you have to call one func and it must print hello world 5 times
class Node{
public :

//if the function if caalling itself again and again 
//it is considered as separate function call + seperate memory
void print(int n){
    //base condn when the condn meets the function stop making new function calls
    //no base condn 
    //function call will keep happening 
    //stack will fill again and again
    // every function call will take some memory
    // one time will come when computer memory will be filled
    // this is stack overflow error
    if(n>5){
        return;
    }
    cout<<n<<endl;
    print(n+1);
}
};

int main(){
    Node x2;
    x2.print(1);     // memeber function need onject of the class to work

}