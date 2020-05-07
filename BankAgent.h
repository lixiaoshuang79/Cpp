//2019302080239ÀîĞ¡Ë«
#pragma once
#include<string>
#include<iostream>
#include"BankCard.h"
#include"SavingsAccount.h"
using namespace std;

class BankAgent
{
public:
	BankAgent(SavingsAccount &a, BankCard &b,int password1);
}; 
