#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//DaddyDaddyFish 07/12/17 SycamoreFanSub
int main()
{
	char Org_file_name[50];
	char s[200];
	cout<<"Please enter file name:"<<endl;
	cin>>Org_file_name;
	fstream Org_file;
	Org_file.open(Org_file_name,ios::in);
	if (!Org_file.is_open())
	{
		cout<<"File does not exist!"<<endl;
		system("pause");
		return 0;
	}
	fstream Out_file;
	Out_file.open(strcat(Org_file_name,"(After_Getline)"),ios::out);
	while (Org_file.getline(s,sizeof(s)))
	{
		if (s[0]!='\0'&&s[0]>57)
			Out_file<<s<<endl;
	}
	cout<<"Output file "<<Org_file_name<<" is generated!"<<endl;
	Org_file.close();
	Out_file.close();
	system("pause");
	return 0;
}