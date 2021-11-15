#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int Y,M,D,z=1,i,total=0,month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char ans[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	ifstream A("18.txt");
	A>>Y>>M>>D;
	cout<<Y<<" "<<M<<" "<<D<<endl;
	if(Y%4==0 && Y%100!=0 || Y%400==0)
	{
		if(M==2)
		{
			if(D>29)	
		 {
		    cout<<"Ans=Error";
		    z=0;
		 }
		 else month[1]=29;
		}
	} 
	if(z==1)
	{
		if(Y<1900 || Y>2100 || M<1 || M>12 || D>month[M-1])
		{   cout<<"Ans=Error"<<endl;
		    return 0;}
		for(i=1900;i<Y;i++)
		{
		  if(i%4==0 && i%100!=0 || i%400==0)total+=366;
		  else total+=365;
	}
	for(i=0;i<M-1;i++)
	total+=month[i];
	total+=D;
	//cout<<"Total"<<total;
	cout<<ans[total%7]<<endl;
	}
	return 0;
	A.close();
}	    
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

