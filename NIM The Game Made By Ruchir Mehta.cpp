#include<bits/stdc++.h>
using namespace std;
bool gameOver(int a[],int n)
{for(int i=0;i<n;i++)
{if(a[i]>0)
return false;
}
return true;
}
void playchoice1(string name)
{system("CLS");
int n;
cout<<"Enter the number of piles : ";
cin>>n;
int a[n];
cout<<"Enter the number of coins in those piles respectively"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];

//bool b=false;
while(!gameOver(a,n))
{int myxor=a[0];
for(int i=1;i<n;i++)
{myxor=myxor^a[i];
}
if(myxor!=0)
{for(int i=0;i<n;i++)
{if((a[i]^myxor)<a[i])
{cout<<"Computer :"<<endl;
cout<<"Pile no. :"<<i+1<<endl;
cout<<"Coins Removed :"<<a[i]-(a[i]^myxor)<<endl;
a[i]=a[i]^myxor;
break;
}
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
else
{int max_index=0;
for(int i=0;i<n;i++)
{if(a[i]>a[max_index])
max_index=i;
}
cout<<"Computer :"<<endl;
cout<<"Pile no. :"<<max_index+1<<endl;
cout<<"Coins Removed :"<<1<<endl;
a[max_index]-=1;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
if(gameOver(a,n))
{cout<<"Computer Won!!!"<<endl;
break;}
//
int temp1,temp2;
cout<<name<<" :"<<endl;
cout<<"Pile no. :";
cin>>temp1;
cout<<"Coins Removed :";
cin>>temp2;
a[temp1-1]-=temp2;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
if(gameOver(a,n))
{cout<<name<<" Won!!!";
break;}
}
}
//
//
//
//
void playchoice2(string name)
{system("CLS");
int n=5+rand()%5,temp1,temp2;
int a[n];
for(int i=0;i<n;i++)
{a[i]=1+rand()%20;
cout<<a[i]<<" ";
}
cout<<endl;
cout<<"Human :"<<endl;
cout<<"Pile no. :";
cin>>temp1;
cout<<"Coins Removed :";
cin>>temp2;
a[temp1-1]-=temp2;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;

while(!gameOver(a,n))
{int myxor=a[0];
for(int i=1;i<n;i++)
{myxor=myxor^a[i];
}
if(myxor!=0)
{for(int i=0;i<n;i++)
{if((a[i]^myxor)<a[i])
{cout<<"Computer :"<<endl;
cout<<"Pile no. :"<<i+1<<endl;
cout<<"Coins Removed :"<<a[i]-(a[i]^myxor)<<endl;
a[i]=a[i]^myxor;
break;}
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
else
{int max_index=0;
for(int i=0;i<n;i++)
{if(a[i]>a[max_index])
max_index=i;
}
cout<<"Computer :"<<endl;
cout<<"Pile no. :"<<max_index+1<<endl;
cout<<"Coins Removed :"<<1<<endl;
a[max_index]-=1;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
if(gameOver(a,n))
{cout<<"Computer Won!!!";
break;}
//
int temp1,temp2;
cout<<name<<" :"<<endl;
cout<<"Pile no. :";
cin>>temp1;
cout<<"Coins Removed :";
cin>>temp2;
a[temp1-1]-=temp2;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
if(gameOver(a,n))
{cout<<name<<" Won!!!";
break;}
}
}
//
//
//
//
void playchoice3(string name1,string name2)
{system("CLS");
int n,temp1,temp2;
cout<<name1<<", Enter the number of piles : ";
cin>>n;
int a[n];
cout<<name1<<", Enter the number of coins in those piles respectively"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
bool b=false;
while(!gameOver(a,n))
{if(!b)
cout<<name2<<" :"<<endl;
else
cout<<name1<<" :"<<endl;
cout<<"Pile no. :";
cin>>temp1;
cout<<"Coins Removed :";
cin>>temp2;
a[temp1-1]-=temp2;
b=!b;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
if(b)
cout<<name2<<" Won!!!!";
else
cout<<name1<<" Won!!!!";
}
main()
{string name1,name2;
int choice;
cout<<"                                     ..............Welcome To The Great Game Of NIM............."<<endl;
cout<<"                                                               -Made By Ruchir Mehta"<<endl<<endl;
cout<<"                                                 Which Type of Game do you want to play?"<<endl;
cout<<"                                                     1. Comuter vs Human (Computer plays first)"<<endl;
cout<<"                                                     2. Human vs Computer (Human plays first)"<<endl;
cout<<"                                                     3. Human vs Human "<<endl<<endl;
cout<<"                                                 Please Enter your Choice : ";
cin>>choice;
switch(choice)
{
	case 1:
		system("CLS");
		cout<<"                                                       Kindly Enter Your Name : ";
        cin>>name1;
        cout<<endl;
        cout<<"                                               ..........Hello "<<name1<<" ..........."<<endl; 
		playchoice1(name1);
		break;
	case 2:
		system("CLS");
		cout<<"                                                       Kindly Enter Your Name : ";
        cin>>name1;
        cout<<endl;
        cout<<"                                               ..........Hello "<<name1<<" ..........."<<endl; 
		playchoice2(name1);
		break;
	case 3:
	    system("CLS");
		cout<<"                                                       Kindly Enter Player 1 Name : ";
		cin>>name1;
		cout<<endl;
		cout<<"                                                       Kindly Enter Player 2 Name : ";
		cin>>name2;
		playchoice3(name1,name2);
		break;
    default:
    	cout<<endl<<"Please Enter a Correct Choice.... :( ....."<<endl;
}
}
