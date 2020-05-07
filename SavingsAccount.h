//2019302080239ÀîÐ¡Ë«
#pragma once
#include<string>
#include<iostream>
using namespace std;

class SavingsAccount
{
public:
	SavingsAccount(string i, int j);
	SavingsAccount();
	void show();
	void cun(int i);
	void qu(int i);
	string m_Name;
	int m_Balance;
};
