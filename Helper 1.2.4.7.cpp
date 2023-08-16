#include<bits/stdc++.h>
#include<windows.h>
#include <cstdlib>
#include <ctime>
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
		error:sayz("这个语言正在开发，暂不开放！");
		cout<<endl;
		sayz("這個語言正在開發，暫不開放！");
		cout<<endl;
		says("Этот язык находится в стадии разработки и пока недоступен!");
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
	yjm:system("cls");
	says("1.简体中文 2.English 3.Under development... 4.后台");
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
		sayz("设置成功！");
		cout<<endl;
		sayz("欢迎使用helper 1.1！");
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
		sayz("欢迎！ADMIN");
		Sleep(1000);
		while(1==1)
		{
			system("cls");
			sayz("这台计算机上有如下应用软件:");
			cout<<endl;
			sayz("1.简单计算器  2.浏览器  3.电源选项  4.猜数字游戏  5.更改PIN") ;
			cout<<endl;
			cin>>zl;
			system("cls");
			cout<<"请稍候......"; 
			Sleep(1000); 
			system("cls");
			if(zl==1)
			{
				sayz("请输入两个数");
				cout<<endl;
				int jsa,jsb;
				cin>>jsa>>jsb;
				Sleep(100);
				system("cls");
				sayz("请输入运算符 1.+ 2.- 3.×4.÷");
				cout<<endl;
				cin>>zl;
				sayz("结果为:");
				switch(zl)
				{
					case 1:cout<<jsa+jsb;break;
					case 2:cout<<jsa*jsb;break;
					case 3:cout<<jsa-jsb;break;
					case 4:cout<<jsa/jsb<<"......"<<jsa%jsb;break;
				}
				cout<<endl;
				Sleep(1000);
				sayz("5秒后退出");
				Sleep(5000);
			}
			if(zl==2)
			{
				string URL;
				sayz("可供选择的网站有:");
				cout<<endl;
				cout<<"1.百度\n2.云领橙长\n3.一本通\n4.恶作剧网站";
				cout<<endl;
				sayz("请输入网页名:");
				cin>>URL;
				system("cls");
				sayz("打开中...");
				Sleep(500);
				cout<<endl; 
				if(URL=="1")
				{
					system("start https://www.baidu.com");
				} 
				else if(URL=="2")
				{
					system("start http://ylcz.top");
				}
				else if(URL=="3")
				{
					system("start http://ybt.ssoier.cn:8088");
				}
				else if(URL=="4")
				{
					system("start https://geekprank.com");
				}
				
				else
				{
					say_fastest("各种网站正在逐步添加，敬请期待。可以将网站名和地址发送给ylcz.top上的刘雨鑫,也可以发送邮件到 xinxintpai@outlook.com ，LYX会将15个网站分成一组，分批次添加，每次2-3组。输入1打开Microsoft Edge，0退出");
					//cin>>zl;
					/*if(zl==1)
					{
						//ShellExecute(NULL,"open","C:\Program Files (x86)\Microsoft\Edge\Application",NULL,NULL,SW_SHOWNORMAL);
					}
					else
					{
						continue;
					}
					*/
				}
				system("cls");
				sayz("5秒后自动关闭");
				Sleep(5000);
			}
			if(zl==3)
			{
				sayz("1.关机 2.重启 3.注销");
				cout<<endl;
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
				if(zl==4)
				{
					srand(time(0));
				    int randomNumber = rand() % 100 + 1;
    				int guess;
    				int tries = 0;
    				sayz("猜数字游戏！");
   					cout<<endl;
   					Sleep(1000);
   					system("cls");
   					do {
    				    sayz("请输入一个1到100之间的整数: ");
    				    cin >> guess;
    				    tries++;
    				    system("cls");
    				    if (guess > randomNumber) {
    				        sayz("太大了！");
    				        cout<<endl;
    				    } else if (guess < randomNumber) {
    				        sayz("太小了！");
    				        cout<<endl;
    				    } else {
    				        sayz("恭喜你，猜对了！");
    				        cout<<endl;
    				        sayz("你猜了");cout<<tries;sayz("次。");
    				        Sleep(1500);
 				        }
 					    } while (guess != randomNumber);
					}
					if(zl==5)
					{
						ccc:sayz("请输入原密码:");
						int n;
						cin>>n;
						Sleep(500);
						if(n==right)
						{
							sayz("原密码正确，请输入新密码:");
							cin>>right;
							Sleep(500);
							system("cls");
							sayz("请稍等...");
							Sleep(2500);
							system("cls");
							sayz("更改成功，正在重启...");
							Sleep(1000);
							system("cls");
							goto cq;
						}
						else
						{
							sayz("密码错误，请重新输入！");
							goto ccc;
						}
					}
			} 
		}
	if(zl==2)
	{
		say("Setup successful!");
		cout<<endl;
		say("Welcome to helper 1.1!");
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
		say("Welcome！ADMIN");
		Sleep(1000);
		while(1==1)
		{
			system("cls");
			says("This computer contains the following applications:");
			cout<<endl;
			says("1. Simple Calculator 2. Browser 3. Power options 4.Guess the numbers game 5.Change the PIN") ;
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
				say("Please enter an operator 1.+ 2.- 3.×4.÷");
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
				string URL;
				say("Please enter a page name:");
				getline(cin,URL);
				system("cls");
				say("Open...");
				Sleep(500);
				cout<<endl; 
				if(URL=="Baidu")
				{
					system("start https://www.baidu.com");
				} 
				else if(URL=="Cloud collar orange long")
				{
					system("start http://ylcz.top");
				}
				else if(URL=="One book")
				{
					system("start http://ybt.ssoier.cn:8088");
				}
				else if(URL=="practical joke")
				{
					system("start https://geekprank.com");
				}
				
				else
				{
					say_faster("Various websites are being added gradually, so stay tuned. You can send the website name and address to Liu Yuxin on the ylcz.top, or you can send an email to xinxintpai@outlook.com, and the author will divide the 15 websites into a group and add them in batches, 2-3 groups each time");
				}
				system("cls");
				sayz("Automatic shutdown after 5 seconds");
				Sleep(5000);
			}
			if(zl==3)
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
			if(zl==4)
				{
					srand(time(0));
				    int randomNumber = rand() % 100 + 1;
    				int guess;
    				int tries = 0;
    				say("Guess the numbers game!");
   					cout<<endl;
   					Sleep(1000);
   					system("cls");
   					do {
    				    say("Please enter an integer between 1 and 100: ");
    				    cin >> guess;
    				    tries++;
    				    system("cls");
    				    if (guess > randomNumber) {
    				        sayz("Too big!");
    				        cout<<endl;
    				    } else if (guess < randomNumber) {
    				        sayz("Too small!");
    				        cout<<endl;
    				    } else {
    				        sayz("Congratulations, you guessed it!");
    				        cout<<endl;
    				        sayz("You guessed ");cout<<tries;sayz(" times");
    				        Sleep(1500);
 				        }
 					} while (guess != randomNumber);
				}
				if(zl==5)
					{
						cccc:sayz("Please enter the original password:");
						int n;
						cin>>n;
						Sleep(500);
						if(n==right)
						{
							sayz("The original password is correct, please enter the new password:");
							cin>>right;
							Sleep(500);
							system("cls");
							sayz("Please wait...");
							Sleep(2500);
							system("cls");
							sayz("Change successful, restarting...");
							Sleep(1000);
							system("cls");
							goto cq;
						}
						else
						{
							sayz("The password is incorrect, please re-enter!");
							goto cccc;
						}
					}
		} 
	}
	long long right_n=371626201207032213;
	if(zl==4) 
	{
		sayz("请输入作者设置的18位强密码:");
	long long cin_sfz;
		cin>>cin_sfz;
		if(cin_sfz==right_n)
		{
			system("cls");
			say("right!");
			//手动滑稽 
		}
		else
		{ 
			system("cls");
			sayz("错误，将返回至原界面..."); 
			Sleep(1000);
			goto yjm;
		}
	}
}
/* 新功能！ 即将推出...
 
					if(zl==6)
					{
						sayz("欢迎来到文件资源管理器！此部分基于cmd，如有更好方法，请发送邮件到 xinxintpai@outlook.com")
						
					} 
				 
				 */

