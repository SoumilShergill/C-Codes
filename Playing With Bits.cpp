 #include<iostream>
    using namespace std;
    int main(){
     int q;
     cin>>q;
     int* output= new int[q];
     for(int i=0;i<q;i++){
      int a,b;
      cin>>a>>b;
      int sum=0;
      for(int temp=a;temp<=b;temp++){
       int count=0;
       int j=temp;
       while(j>0){
        if(j%2==1){
         count=count+1;
        }
        j=j/2;
       }
       sum=sum+count;
      }
      output[i]=sum;
     }
     for(int i=0;i<q;i++){
      cout<<output[i]<<endl;
     }     
    }
