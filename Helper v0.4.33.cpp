#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void say(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(50);
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
		Sleep(10);
	}
}
int main()
{
	cq:say("creation by VL");
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
		sayz("欢迎使用helper 0.4.33！");
		Sleep(1000);
		system("cls");
		zx:sayz("请输入您的PIN:");
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
		Sleep(1000);
		while(1==1)
		{
			system("cls");
			sayz("这台计算机上有如下应用软件:");
			cout<<endl;
			sayz("1.简单计算器  2.文件资源管理器（尚未完全编写，此选项暂时不开放）  3.浏览器  4.电源选项") ;
			cin>>zl;
			cout<<endl;
			cout<<"请稍候"; 
			Sleep(1000); 
			system("cls");
			if(zl==1)
			{
				sayz("请输入两个数");
				int jsa,jsb;
				cin>>jsa>>jsb;
				Sleep(100);
				system("cls");
				sayz("请输入运算符 1.+ 2.- 3.×4.÷");
				cin>>zl;
				sayz("结果为:");
				switch(zl)
				{
					case 1:cout<<jsa+jsb;break;
					case 2:cout<<jsa*jsb;break;
					case 3:cout<<jsa-jsb;break;
					case 4:cout<<jsa/jsb<<"......"<<jsa%jsb;break;
				}
				sayz("10秒后退出");
				Sleep(10000);
			}
			if(zl==2)
			{
				sayz("文件资源管理器尚未完全编写，暂时不开放");
			}
			if(zl==3)
			{
				;
			}
			if(zl==4)
			{
				sayz("1.关机 2.重启 3.注销");
				cin>>zl;
				if(zl==1)
				{
					sayz("正在关机...");
					Sleep(5000);
					return 0;
				} 
				if (zl==2)
				{
					sayz("正在重启...");
					Sleep(5000);
					system("cls");
					goto cq;
				}
				if(zl==3)
				{
					sayz("正在注销...");
					Sleep(2500);
					system("cls");
					goto zx;
				}
			}
		} 
	}
	if(zl==2)
	{
		say("Setup successful!");
		cout<<endl;
		say("Welcome to helper 0.4.33!");
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
		while(1==1)
		{
			system("cls");
			say("This computer contains the following applications:");
			cout<<endl;
			say("1. Simple Calculator 2. File Explorer (not fully written, this option is temporarily unavailable) 3. Browser 4. Power options") ;
			cin>>zl;
			cout<<endl;
			cout<<"Please wait..."; 
			Sleep(1000); 
			system("cls");
			if(zl==1)
			{
				say("Please enter two numbers");
				int jsa,jsb;
				cin>>jsa>>jsb;
				Sleep(100);
				system("cls");
				say("Please enter an operator 1.+ 2.- 3.×4.÷");
				cin>>zl;
				say("The result is:");
				switch(zl)
				{
					case 1:cout<<jsa+jsb;break;
					case 2:cout<<jsa*jsb;break;
					case 3:cout<<jsa-jsb;break;
					case 4:cout<<jsa/jsb<<"......"<<jsa%jsb;break;
				}
				say("Exit after 5 seconds");
				Sleep(5000);
			}
			if(zl==2)
			{
				say("File Explorer is not yet fully written and is not available for the time being");
			}
			if(zl==3)
			{
				;
			}
			if(zl==4)
			{
				say("1. Shut down 2. Restart 3. Log off");
				cin>>zl;
				if(zl==1)
				{
					say("Shutting down...");
					Sleep(5000);
					return 0;
				} 
				if (zl==2)
				{
					say("Rebooting...");
					Sleep(5000);
					system("cls");
					goto cq;
				}
				if(zl==3)
				{
					say("Logging out...");
					Sleep(2500);
					system("cls");
					goto zx;
				}
			}
		} 
	}
	if(zl!=1&&zl!=2)
	{
		sayz("这个语言正在开发，暂不开放！");
		sayz("這個語言正在開發，暫不開放！");
		sayz("Этот язык находится в стадии разработки и пока недоступен!");
		say("This language is under development and is not available yet!");
		say("Afkani horumar buu ku socdaa, welina lama heli karo!");
	}
}


