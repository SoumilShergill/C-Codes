#include<iostream>     
using namespace std;
int main(){
    int n,num,position=0,x,i,sum=0;
    cin>>n;
    
    while(n>0){
        num=n%10;
        position++;                     
         i=1;
        x=1;

        while(i<=(num-1)){
            x=x*10;
            i++;
        }
        sum = sum + position*x;
        n=n/10;
    }
   
    cout<<sum<<endl;
    return 0;
    
}
