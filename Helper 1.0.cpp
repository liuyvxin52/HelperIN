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
		Sleep(25);
	}
}
void say_faster(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(5);
	}
}
void say_fastest(string a)
{
	for(int i=0;i<=a.length();i++)
	{
		cout<<a[i];
		Sleep(1);
	}
}
int main()
{
	if(1==2)
	{
		error:sayz("����������ڿ������ݲ����ţ�");
		cout<<endl;
		sayz("�@���Z�������_�l�������_�ţ�");
		cout<<endl;
		says("������ ��٧�� �ߧѧ��էڧ��� �� ���ѧէڧ� ��ѧ٧�ѧҧ��ܧ� �� ���ܧ� �ߧ֧է�����֧�!");
		cout<<endl;
		says("This language is under development and is not available yet!");
		cout<<endl;
		says("Afkani horumar buu ku socdaa, welina lama heli karo!");
		return 0;
	}
	cq:say("Creation by LYX");
	cout<<endl;
	say("Please select a language");
	Sleep(500);
	system("cls");
	says("1.�������� 2.English 3.Under development...");
	cout<<endl;
	int zl;
	cin>>zl;
	Sleep(500);
	system("cls");
	if(zl==3)
	{
		goto error;
	}
	say("Please wait...");
	cout<<endl;
	say("We are setting language");
	cout<<endl;
	Sleep(5000);
	int a,right=120703;
	system("cls");
	if(zl==1)
	{
		sayz("���óɹ���");
		cout<<endl;
		sayz("��ӭʹ��helper 1.0��");
		Sleep(1000);
		system("cls");
		zx:sayz("����������PIN:");
		cin>>a;
		if(a==right)
		{
			;
		}
		else
		{
			sayz("PIN���󣬳��򼴽���ֹ����");
			say("!!!");
			Sleep(1000);
			system("cls");
			Sleep(500);
			say("5");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("4");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("3");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("2");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("1");
			Sleep(500);
			system("cls");
			Sleep(500);
			return 0;
		}
		sayz("��ӭ��ADMIN");
		Sleep(1000);
		while(1==1)
		{
			system("cls");
			sayz("��̨�������������Ӧ�����:");
			cout<<endl;
			sayz("1.�򵥼�����  2.�ļ���Դ����������δ��ȫ��д����ѡ����ʱ�����ţ�  3.�����  4.��Դѡ��") ;
			cout<<endl;
			cin>>zl;
			system("cls");
			cout<<"���Ժ�......"; 
			Sleep(1000); 
			system("cls");
			if(zl==1)
			{
				sayz("������������");
				cout<<endl;
				int jsa,jsb;
				cin>>jsa>>jsb;
				Sleep(100);
				system("cls");
				sayz("����������� 1.+ 2.- 3.��4.��");
				cout<<endl;
				cin>>zl;
				sayz("���Ϊ:");
				switch(zl)
				{
					case 1:cout<<jsa+jsb;break;
					case 2:cout<<jsa*jsb;break;
					case 3:cout<<jsa-jsb;break;
					case 4:cout<<jsa/jsb<<"......"<<jsa%jsb;break;
				}
				cout<<endl;
				Sleep(1000);
				sayz("5����˳�");
				Sleep(5000);
			}
			if(zl==2)
			{
				sayz("�ļ���Դ��������δ��ȫ��д����ʱ������");
			}
			if(zl==3)
			{
				string URL;
				sayz("��������ҳ��:");
				cin>>URL;
				system("cls");
				sayz("����...");
				Sleep(500);
				cout<<endl; 
				if(URL=="�ٶ�")
				{
					system("start https://www.baidu.com");
				} 
				else if(URL=="����ȳ�")
				{
					system("start http://ylcz.top");
				}
				else if(URL=="һ��ͨ")
				{
					system("start http://ybt.ssoier.cn:8088");
				}
				else if(URL=="��������վ")
				{
					system("start https://geekprank.com");
				}
				
				else
				{
					say_fastest("������վ��������ӣ������ڴ������Խ���վ���͵�ַ���͸�ylcz.top�ϵ�������,Ҳ���Է����ʼ��� xinxintpai@outlook.com �����߻Ὣ15����վ�ֳ�һ�飬��������ӣ�ÿ��2-3��");
				}
				system("cls");
				sayz("5����Զ��ر�");
				Sleep(5000);
			}
			if(zl==4)
			{
				sayz("1.�ػ� 2.���� 3.ע��");
				cout<<endl;
				cin>>zl;
				if(zl==1)
				{
					sayz("���ڹػ�...");
					Sleep(5000);
					return 0;
				} 
				if (zl==2)
				{
					sayz("��������...");
					Sleep(5000);
					system("cls");
					goto cq;
				}
				if(zl==3)
				{
					sayz("����ע��...");
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
		say("Welcome to helper 1.0!");
		Sleep(1000);
		system("cls");
		ezx:say("Please enter your PIN:");
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
			system("cls");
			say("5");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("4");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("3");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("2");
			Sleep(500);
			system("cls");
			Sleep(500);
			say("1");
			Sleep(500);
			system("cls");
			Sleep(500);
			return 0;
		}
		say("Welcome��ADMIN");
		Sleep(1000);
		while(1==1)
		{
			system("cls");
			says("This computer contains the following applications:");
			cout<<endl;
			says("1. Simple Calculator 2. File Explorer (not fully written, this option is temporarily unavailable) 3. Browser 4. Power options") ;
			cout<<endl;
			cin>>zl;
			system("cls");
			cout<<"Please wait..."; 
			Sleep(1000); 
			system("cls");
			if(zl==1)
			{
				say("Please enter two numbers");
				cout<<endl;
				int jsa,jsb;
				cin>>jsa>>jsb;
				Sleep(100);
				system("cls");
				say("Please enter an operator 1.+ 2.- 3.��4.��");
				cout<<endl;
				cin>>zl;
				say("The result is:");
				switch(zl)
				{
					case 1:cout<<jsa+jsb;break;
					case 2:cout<<jsa*jsb;break;
					case 3:cout<<jsa-jsb;break;
					case 4:cout<<jsa/jsb<<"......"<<jsa%jsb;break;
				}
				Sleep(1000);
				system("cls");
				say("Exit after 5 seconds");
				Sleep(5000);
			}
			if(zl==2)
			{
				says("File Explorer is not yet fully written and is not available for the time being");
			}
			if(zl==3)
			{
				string URL;
				say("Please enter a page name:");
				getline(cin,URL);
				system("cls");
				say("Open...");
				Sleep(500);
				cout<<endl; 
				if(URL=="�ٶ�")
				{
					system("start https://www.baidu.com");
				} 
				else if(URL=="����ȳ�")
				{
					system("start http://ylcz.top");
				}
				else if(URL=="һ��ͨ")
				{
					system("start http://ybt.ssoier.cn:8088");
				}
				else if(URL=="��������վ")
				{
					system("start https://geekprank.com");
				}
				
				else
				{
					say_faster("Various websites are being added gradually, so stay tuned. You can send the website name and address to Liu Yuxin on the ylcz.top, or you can send an email to xinxintpai@outlook.com, and the author will divide the 15 websites into a group and add them in batches, 2-3 groups each time");
				}
				system("cls");
				sayz("5����Զ��ر�");
				Sleep(5000);
			}
			if(zl==4)
			{
				say("1. Shut down 2. Restart 3. Log off");
				cout<<endl;
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
					goto ezx;
				}
			}
		} 
	}
}

