/*

problem name:""
problem link:https://codility.com/programmers/lessons/1-iterations/binary_gap/start/
status: accepted 
author :moahnd sakr ;

*/
#include <iostream>
#include <string>
#include<algorithm>
 
 
 
 int  solution(int n) {
    // write your code in C++14 (g++ 6.2.0)
    string s;
    
    while(n){
        if(n&1){
            s+='1';
        }
        else {
            s+='0';
        }
        n=n>>1;
    }

reverse(s.begin(),s.end());
int len=s.length();
    int st=0;
    int end=0;
    int count=0;
    int maxi=0;
    for(int i= 0;i<len;i++){
        if(!st&&s[i]=='1'){
            st++;
        }
        else if(st&&s[i]=='0'){
            ++count;
        }
        else if(st&&s[i]=='1'){
            maxi=max(maxi,count);
              count=0;
              st++;

        }
       
        
    
}
 return maxi;
}
