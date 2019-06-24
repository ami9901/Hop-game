//This is The Coding Area
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int n,i,max=0,flag=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d,",&a[i]);
  }
  i=0;
  while(i<n){
    if(flag==0 && i<n-2 && i!=n-2){
      if((a[i]+a[i+1]+a[i+2])<(3*a[i+2])){
        //double jump
        max=max+3*a[i+2];
        cout<<max<<endl;
        flag=1;
        i=i+3;
      }
    }
    if((a[i]+a[i+1])<(2*a[i+1])){
      //single jump
      max=max+2*a[i+1];
      cout<<max<<endl;
      i=i+2;
    }

    else{
      max=max+a[i];
      cout<<max<<endl;
      i++;
    }
  }
    cout<<max<<endl;
  return 0;

}

