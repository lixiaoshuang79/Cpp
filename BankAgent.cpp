//2019302080239ÀîÐ¡Ë«
#include<string>
#include<iostream>
#include"BankAgent.h"
#include"SavingsAccount.h"
using namespace std;

BankAgent::BankAgent(SavingsAccount &a, BankCard &b,int password1)
{
	b.password = password1;
	b.account = a.m_Name;
}