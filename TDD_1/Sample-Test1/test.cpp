#include "pch.h"
#include "../TDD_1/cal.cpp"
#include <vector>
using namespace std;

class AccountFixture :public testing ::Test
{
public:
	Account account{ 10000 };
};


TEST_F(AccountFixture, getbalance)
{
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, deposit)
{
	account.deposit(5000);

	EXPECT_EQ(15000, account.getBalance());
}

TEST_F(AccountFixture, withdeposit)
{
	account.withdraw(4000);
	
	EXPECT_EQ(6000, account.getBalance());
}

TEST_F(AccountFixture, withdeposit_1)
{
	account.withdraw(12000);
	
	EXPECT_EQ(10000, account.getBalance());
}


