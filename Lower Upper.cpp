#include<iostream>
 using namespace std;
 int main(){  
char ch;
cin>>ch;
 if(ch>=65&&ch<=90)
cout<<endl<<"UPPERCASE";
else if(ch>=97&&ch<=122)
cout<<endl<<"lowercase";
else
cout<<endl<<"Invalid";
return 0;
}
