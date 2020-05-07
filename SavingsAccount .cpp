//2019302080239李小双
#include"SavingsAccount.h"
#include<string>
#include<iostream>
using namespace std;
 SavingsAccount::SavingsAccount(string i, int j)
{
		m_Name = i;
		m_Balance = j;
}
 SavingsAccount::SavingsAccount()
 {}
void SavingsAccount::show()
{
	cout << "储户姓名：" << m_Name << endl;
	cout << "余额：" << m_Balance << endl;
}
void SavingsAccount::cun(int i)
{
	m_Balance = m_Balance + i;
}
void SavingsAccount::qu(int i)
{
	m_Balance = m_Balance - i;
}
