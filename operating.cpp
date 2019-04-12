#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void WaitingTime1(int P[],int n,int B_time[],int W_time[],int quantum)
{
	int RB_time[n];
	for(int i=0;i<n;i++)
	{
		RB_time[i]=B_time[i];
	}
	int t=0;
	while(1)
	{
		bool done=true;
		for(int i=0;i<n;i++)
		{
			if(RB_time[i]>0)
			{
				done=false;
				if(RB_time[i]>quantum)
				{
					t+=quantum;
					RB_time[i]-=quantum;
				}
				else
				{
					t=t+RB_time[i];
					W_time[i]=t-B_time[i];
					RB_time[i]=0;
				}
			}
		}
		if(done==true)
		{
			break;
		}
	}
}
void TurnArroundTime1(int P[],int n,int B_time[],int W_time[],int Ta_time[])
{
	for(int i=0;i<n;i++)
	{
		Ta_time[i]=B_time[i]+W_time[i];
	}
}




int main()
{
	cout<<"\t\t\t\t\tROUND ROBIN"<<"\n\n";
	int n;
	cout<<"Enter the Number of Processes:-";
	cin>>n;
	//Process
	int P1[n],P2[n],P3[n],Priority;
	int B_time1[n],B_time2[n],B_time3[n];
	cout<<"\nEnter Priority of Process :";
	cin>>Priority;
	if(1<=Priority<=4)
{
	for(int i=0;i<n;i++)
	{
		int o=i+1;
		cout<<"Enter Priority and Brust Time of Process ["<<o<<"]\n";
		cin>>P1[i];
		cin>>B_time1[i];
		o=0;
	}
	
}
else if(5<=Priority<7)
	{
		for(int i=0;i<n;i++)
		{
		int o1=i+1;
		cout<<"Enter Priority and Brust Time of Process ["<<o1<<"]\n";
		cin>>P2[i];
		cin>>B_time2[i];
		o1=0;
	    }
	}
	else if(7<=Priority<=9)
	{
		for(int i=0;i<n;i++)
		{
		int o2=i+1;
		cout<<"Enter Priority and Brust Time of Process ["<<o2<<"]\n";
		cin>>P3[i];
		cin>>B_time3[i];
		o2=0;
	    }
	}
    int W_time1[n],Ta_time1[n],Tw_time1=0;
    int quantum1=4;
    WaitingTime1(P1,n,B_time1,W_time1,quantum1);
    TurnArroundTime1(P1,n,B_time1,W_time1,Ta_time1);
    cout<<"\n "<<"PROCESS"<<"\t"<<"BRUST TIME"<<"\t"<<"WAITING TIME"<<"\t"<<"TURN ARROUND TIME"<<endl;
    for(int i=0;i<n;i++)
    { int y=i+1;
    	cout<<" ["<<y<<"]\t\t"<<B_time1[i]<<"\t\t"<<W_time1[i]<<"\t\t"<<Ta_time1[i]<<endl;
    	y=0;
	}
     
	
}
