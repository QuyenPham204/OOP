#include<bits/stdc++.h>
using namespace std;
class TinhToan{
    private:
     int a;
	 int b;
     
    public: 
     void nhap(){
     	cin>>a;
     	cin>>b;
	 }
	 float cong(){
	 	return a+b;
	 }
};

int main(){
  TinhToan x;
  x.nhap();
  cout<<x.cong();
}