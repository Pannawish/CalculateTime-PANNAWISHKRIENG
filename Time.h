#include <iostream>
using namespace std;
#include <iomanip>

void getTime(int &h,int &m){
  cin>>h>>m;
}
int subtract(int h1,int m1,int h2,int m2){
  int num,min;
  num=h2-h1;
  min=m2-m1;
  if (num>=0&&min>=0){
    return num;
  }
  else if (num>=0&&min<0){
    return num-1;
  }
  else if (num<0&&min>=0){
    return num+24;
  }
  else if (num<0&&min<0){
    return num+24-1;
  }
}

int subtract(int min1,int min2){
  int minute;
  minute=min2-min1;
  if(minute<0){
    return minute+60;
  }
  else{
    return minute;
  }
}