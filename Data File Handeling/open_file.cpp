#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	char ch='P', ch1='R';
	string inform="Hi! Everyone How are you people";

	//opening a file for output purpose only using constructor
	ofstream fout("file.txt");
	if(!fout)
	{
		cout<<"The file doesn't exist! "<<endl;
	}
	else{
		cout<<"File has been created successfully! "<<endl;
	}
	//cout<<"Enter the text that you want to store inside the file: "<<endl;
//	getline(cin, inform);
	fout.put(ch);
	fout.put(ch1);
	fout<<endl<<inform;
	fout<<"\nThank You So Much for your inspiration! "<<endl;
	fout.close();
	//string take;

//	char inch, inch1;
	string take;
		
	//opening a file for input purpose only using open();
	ifstream ifile;
	ifile.open("file.txt");
//	ifile.get(inch);
//	cout<<inch<<endl;
//	ifile.get(inch1);
//	cout<<inch1<<endl;
	getline(ifile, take);
	cout<<take<<endl;
		getline(ifile, take);
	cout<<take<<endl;
	return 0;
}
