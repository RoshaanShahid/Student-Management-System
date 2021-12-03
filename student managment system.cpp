#include<iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20];
int total=0;
void enter()
{
	
		int choice=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>choice;
			if(total==0)
			{
			total=choice+total;
			for(int i=0;i<choice;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter First Name ";
				cin>>arr1[i];
				cout<<"Enter Last Name ";
				cin>>arr6[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter course ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];
				
			}
	    	}
	    	else
	    	{
	    		
	    		for(int i=total;i<choice+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter course ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];
			}
			total=choice+total;
			}
	
}
void show()
{
	
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<arr1[i]<<" "<<arr6[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    	    }
	    	}
}
void search()
{
		if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	string rollno;
	cout<<"Enter the roll no of student :";
	cin>>rollno;
	for(int i=0;i<=total;i++)
	{
	
	if(rollno==arr2[i])
	{
			cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	}
}
}
}
void update()
{
		if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
	cout<<"Enter the roll no of student :";
	cin>>rollno;
	for(int i=0;i<=total;i++)
	{
	
	if(rollno==arr2[i])
	{
		cout<<"Privious data is:";
			cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    		cout<<"Enter the new data";
	    		cout<<"Name :"<<endl;
				cin>>arr1[i];
	    		cout<<"Roll no :"<<endl;
				cin>>arr2[i];
	    		cout<<"Course :"<<endl;
				cin>>arr3[i];
	    		cout<<"Class :"<<endl;
				cin>>arr4[i];
	    		cout<<"Contact :"<<endl;
				cin>>arr5[i];
	}
}
}
}
void deleterecord()
{
		if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
int a;
cout<<"Press 1 to delete all data :\n\n";
cout<<"Press 2 to delete specific data :\n";
cin>>a;	
if(a==1)
{
	total=0;
	cout<<"........All data is delted......";
}
else if (a==2)
{
string rollno;
cout<<"Enter the roll no. :";
cin>>rollno;
for(int i=0;i<=total;i++)
{
	if(rollno==arr2[i])
	{
		for(int j=i; j<=total;j++)
		{
			arr1[i]=arr1[j+1];
		    arr2[i]=arr2[j+1];
			arr3[i]=arr3[j+1];
			arr4[i]=arr4[j+1];
			arr5[i]=arr5[j+1];	
		}
		total--;
		cout<<"----------Your required data is deletd----------";
	}
}
}
}
}
int main()
{
	int num;
	cout<<"Enter  the function you want to run: "<<endl<<endl;
	while(true)
	{
	
	cout<<"Press 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update data"<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to exit"<<endl;
	cin>>num;
	
	switch (num)
	{
     case 1:
	 enter();
	 break;
	 case 2:
	 show();
	 break;
	 case 3:
	 search();
	 break;
	 case 4:
	 update();
	 break;
	 case 5:
	 deleterecord();
	 break;
	 case 6:
	 exit(0);
     break;	
	}
}
}

