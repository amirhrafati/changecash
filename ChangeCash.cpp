#include<iostream>
using namespace std;
void change(int sum,int i,int j, int k){
	if (i==20 && j==20 && k==20){}
	else{
           sum=i*2 + j*5 + k*10;
           if(sum==20)
           {
              cout<<i<<"  " <<j<<"  "<<k<<"\n";
           }
           while(k<=20)change(0,i,j,++k);
           k=-1;
           while(j<=20)change(0,i,++j,++k);
           k=-1,j=-1;
           while(i<=20)change(0,++i,++j,++k);
	}
	}
	
int main()
{
cout<<"2$ 5$ 10$"<<endl;
         change(0,0,0,0);
        cin.get();
}
