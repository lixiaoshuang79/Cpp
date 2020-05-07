//2019302080239李小双
#include<string>
#include<iostream>
#include"BankCard.h"
#include"SavingsAccount.h"
#include"BankAgent.h"
using namespace std;

int main()
{
	SavingsAccount accounts[3] = { SavingsAccount("张三",5000),SavingsAccount("李四",3000),SavingsAccount("王五",4000) };
	BankCard cards[3] = { BankCard(1),BankCard(2),BankCard(3)};
	BankAgent agent1(accounts[0], cards[0], 123456);
	BankAgent agent2(accounts[1], cards[1], 654321);
	BankAgent agent3(accounts[2], cards[2], 135790);
	int a, b, m, n,p;
	while (true)
	{
		cout << "请插入银行卡,输入卡号：" << endl;
		cin >> a;
		for (int i = 0;i <3; i++)
		{
			if (cards[i].num == a)
			{
				cout << "请输入您的密码：" << endl;
				cin >> b;
				if (cards[i].password == b)
				{
					cout << "密码正确，请选择操作(1取款，2存款,3显示账户信息)" << endl;
					cin >> m;
					if (m == 1)
					{
						cout << "请输入取款金额：" << endl;
						cin >> n;
						accounts[i].qu(n);
						accounts[i].show();
					}
					if (m == 2)
					{
						cout << "请输入存款金额：" << endl;
						cin >> p;
						accounts[i].cun(n);
						accounts[i].show();

					}
					if (m == 3)
					{
						accounts[i].show();
					}
				}
			}
		}
	}

}