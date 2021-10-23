#include<bits/stdc++.h>
using namespace std;

int x=1;

class Bank
{
	int acno; char name[20], actype[20]; float bal;         // bydefault privat value...
	public:
		void  opbal()
		{
			system("cls");
			cout<<"******************************************************"<<endl;
			cout<<"\t\tAdmin, Bank of Broda"<<endl;
			cout<<"******************************************************"<<endl;
			acno = x;
			string mn;
			cout<<"Enter Accountholder's Name: ";
			cin.ignore();
			cin.getline(name,20);
			cout<<"\nSelect the account type:\n"<<"1:\tSaving"<<endl<<"2:\tCurrrent"<<endl<<"3:\tFixed Deposit Account"<<endl;
			int acctyp=0;
			cin>>acctyp;
			switch (acctyp)
			{
				case 1:
					strcpy(actype,"Saving");
					break;
				case 2:
					strcpy(actype,"Current");
					break;
				case 3:
					strcpy(actype,"Fixed Deposit");
					break;
				default:
					cout<<"Please enter a valid input"<<endl;
			}
			cout<<"\nEnter the Balance for openning account: ";
			cin>>bal;
			cout<<"\nYour Account Number is: "<<acno<<endl<<endl;
			x++;
		}
		
		void deposit()
		{
			system("cls");
			cout<<"******************************************************"<<endl;
			cout<<"\t\tAdmin, Bank of Broda"<<endl;
			cout<<"******************************************************"<<endl;
			cout<<"Enter the amount to be Deposited: ";
			int amount;
			cin>>amount;
			bal += amount;
			cout<<"Your new Balance is: "<<bal<<endl<<endl;
			
		} 
		
		void withdraw()
		{
			system("cls");
			cout<<"******************************************************"<<endl;
			cout<<"\t\tAdmin, Bank of Broda"<<endl;
			cout<<"******************************************************"<<endl;
			cout<<"Enter the amount to be Withdrawn: ";
			int amount;
			cin>>amount;
			if(bal>amount)
			{
				bal -= amount;
				cout<<"Transaction Successful \n Your new Balance is: "<<bal<<endl;
			}
			else
			{
				cout<<"Not sufficient Balance";
			}
			cout<<endl;
		} 
		void display()
		{
			system("cls");
			cout<<"******************************************************"<<endl;
			cout<<"\t\tAdmin, Bank of Broda"<<endl;
			cout<<"******************************************************"<<endl;
			cout<<"Your available balance is: "<<bal<<endl<<endl;
		}
		
};

int main()
{
	int choiceacc, choiceopr;
	Bank acc[50];              //  array of objects....
	system("cls");
	do
	{
		cout<<"******************************************************"<<endl;
		cout<<"\t\tAdmin, Bank of Broda"<<endl;
		cout<<"******************************************************"<<endl;
		cout<<"Enter"<<"\n1 to create new account"<<"\n2 for existing account"<<"\n3 to exit"<<endl;
		cin>>choiceacc;
		if (cin.fail())
  {
     cin.clear(); 
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  }
	if(choiceacc==1)
	{
		acc[x].opbal();
	}
	else if(choiceacc==2)
	{
		int accno;
		system("cls");
			cout<<"******************************************************"<<endl;
			cout<<"\t\tAdmin, Bank of Broda"<<endl;
			cout<<"******************************************************"<<endl;
		cout<<"Enter the account Number: ";
		cin>>accno;
		if (cin.fail())
  {
     cout << "ERROR -- You did not enter an integer";
     cin.clear(); 
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  }
		cout<<endl;
		if(accno>0&&accno<x){
		cout<<"Enter 1 to view Balance."<<"\nEnter 2 to Deposit money."<<"\nEnter 3 to Withdraw money."<<endl;
		cin>>choiceopr;
		if (cin.fail())
  {
     cout << "ERROR -- You did not enter an integer";
     cin.clear(); 
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  }
		cout<<endl;
		
		switch (choiceopr)
		{
			case 1:
				acc[accno].display();
				break;
			case 2:
				acc[accno].deposit();
				break;
			case 3:
				acc[accno].withdraw();
				break;
			case 4:
				return 0;
			default:
				"Invalid Input, Try again.";
		}
	}
	else{
	cout<<"Enter a valid Account Number"<<endl;
}
		
	}
	else if(choiceacc==3)
	{
		return 0;
	}
	else
	{
		cout<<"Invalid Input, Enter again: ";
		cin>>choiceacc;
	}
}
while(choiceacc!=3);
}
