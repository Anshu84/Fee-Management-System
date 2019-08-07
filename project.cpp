#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class clas
{
	int tution=8000;
	int anual=700;
	int activity=200;
	int comp=700;
	int total;
	void calc();
	public:
	 void input()
	 {  cout<<"enter the tution fees"<<endl;
	 	cin>>tution;
	 	cout<<"enter the anual fees"<<endl;
	 	cin>>anual;
	 	cout<<"enter the activity fees"<<endl;
	 	cin>>activity;
	 	cout<<"enter computer fees"<<endl;
	 	cin>>comp;
	 	calc();
	 }	
	
	void display()	
	{
		cout<<"tution fess:"<<tution<<endl;
		cout<<"anual fees:"<<anual<<endl;
		cout<<"activity fees:"<<activity<<endl;
		cout<<"computer fees:"<<comp<<endl;
		calc();
		cout<<"total fees:"<<total<<endl;
	}
};
 void clas::calc()
	 {
	 	total=tution+anual+activity+comp;
	 }
	/* class student
	 {  
	    char name[20];
	 	int roll;
	 	int std;
	     
	 }*/
main()
{    
	clas o[12];
	int choice;
   while(1)
	{cout<<"******************************"<<endl;
	   
	cout<<"                press 1 for fee list of classes"<<endl;
	cout<<"                 press 2 for modifying the fee list"<<endl;
	cout<<"                   press 3 to exit"<<endl;
	cin>>choice;
	if(choice==1)
	{  
	     int c,go;
		cout<<"enter the class"<<endl;
		cin>>c;
		o[c].display();
	
     cout<<"press 1 for main menu ";
     cin>>go;
     	
    }
    if(choice==2)
    {   
	    int no,go;
    	cout<<"enter the class to be modified";
    	cin>>no;
    	o[no].input();
    	cout<<"class "<<no<<"fees has been modified"<<endl;
    	cout<<"press 1 for main menu"<<endl;
    	cin>>go;
		  
    }
    if(choice==3)
	{  
		exit(0);
		 } 	
    	
   }
  getch();  	
	
}
