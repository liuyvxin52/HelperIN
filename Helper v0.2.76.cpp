#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void say(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(100);
	}
}
void says(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(10);
	}
}
void sayz(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(50);
	}
}
int main()
{
	say("creation by VL");
	cout<<endl;
	say("Please select a language");
	Sleep(2500);
	system("cls");
	says("1.简体中文 2.English 3.Under development...");
	cout<<endl;
	int zl;
	cin>>zl;
	say("Please wait...");
	cout<<endl;
	say("We are setting language");
	cout<<endl;
	Sleep(5000);
	int a,right=120703;
	if(zl==1)
	{
		sayz("设置成功！");
		cout<<endl;
		sayz("欢迎使用helper 0.2.76！");
		Sleep(1000);
		system("cls");
		sayz("请输入您的PIN:");
		cin>>a;
		if(a==right)
		{
			;
		}
		else
		{
			sayz("PIN错误，程序即将终止运行");
			say("!!!");
			Sleep(1000);
			say("5");
			system("cls");
			Sleep(1000);
			say("4");
			system("cls");
			Sleep(1000);
			say("3");
			system("cls");
			Sleep(1000);
			say("2");
			system("cls");
			Sleep(1000);
			say("1");
			system("cls");
			Sleep(1000);
			return 0;
		}
		sayz("欢迎！ADMIN");
		Sleep(1);
	}
	if(zl==2)
	{
		say("Setup successful!");
		cout<<endl;
		say("Welcome to helper 0.2.76!");
		Sleep(1000);
		system("cls");
		say("Please enter your PIN:");
		cin>>a;
		if(a==right)
		{
			;
		}
		else
		{
			says("PIN error and the program is about to terminate");
			say("!!!");
			Sleep(1000);
			say("5");
			system("cls");
			Sleep(1000);
			say("4");
			system("cls");
			Sleep(1000);
			say("3");
			system("cls");
			Sleep(1000);
			say("2");
			system("cls");
			Sleep(1000);
			say("1");
			system("cls");
			Sleep(1000);
			return 0;
		}
		say("Welcome！ADMIN");
		Sleep(1000);
	}
}

