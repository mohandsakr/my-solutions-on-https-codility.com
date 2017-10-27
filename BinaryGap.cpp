//============================================================================
//problem link:https://codility.com/programmers/lessons/1-iterations/binary_gap/start/
// Name        : BinaryGap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================


#include<algorithm>
#include<iostream>
using namespace std;
int solution(int N) {
    int maxi=0;
    int counter=0;
    int ones=0;
while(N){
    int val=N%2;
    N=N>>1;
    if(val==0){
    	if(ones)
        ++counter;
        }
        else{
        	++ones;
        	if(ones==2){
            maxi=max(maxi,counter);
            counter=0;
            ones=1;
            }
        }
    }
    return maxi;
}
int main(){
	int n;
	cin>>n;
	cout<<solution(n);


}
