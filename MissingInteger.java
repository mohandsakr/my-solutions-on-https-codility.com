/*
problem link:https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/
status:accepted;
problem  name:MissingInteger;
authour :mohand sakr;
*/

class Solution {
    public int solution(int[] A) {
        int arr[]=new int[10000005];
        int num=0;
        int len=A.length;
        for(int i=0;i<len;i++){
            if(A[i]>0)
            ++arr[A[i]];
        }
        for(int i=1;i<1000000;i++){
            if(arr[i]==0){
                num=i;
                break;
            }
        }
        
        return num;
        
        



    }
}



