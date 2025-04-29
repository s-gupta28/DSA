#include<bits\stdc++.h>
#include<iostream>
using namespace std;


int binarySearch(int a, int b){
    if((a+b)==0){
        return -1;
    }
    int s=a;
    int e=b;
    int mid=(e-s)/2 +s; //to prevent overflow

    //when s>e loop ends as search space ends
    while(s<=e){
        mid=(e-s)/2 +s;

        if(isCorr(mid)==0){
            return mid;
        }
        else if(isCorr(mid)<0){
            e=mid-1;
        }
        else{
            s=mid+1;
        }


    }
    

}

int isCorr(int num){
    if(num>10){
        return 1;
    }

    else if(num<10){
        return -1;
    }

    else{
        return 0;
    }
}


