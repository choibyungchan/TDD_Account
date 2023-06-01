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

TEST_F(AccountFixture, compound_interest)
{
	account.compound_interest_setter(5);

	account.compound_interest();
	EXPECT_EQ(10500, account.getBalance());

	account.compound_interest();
	EXPECT_EQ(11025, account.getBalance());
}

TEST_F(AccountFixture, compound_interest_setter)
{
	account.compound_interest_setter(10);

	account.compound_interest();
	EXPECT_EQ(11000, account.getBalance());
}


TEST_F(AccountFixture, years_compound_interest)
{
	account.compound_interest_setter(5);
	account.years_compound_interest(5);
	
	EXPECT_EQ(12761, account.getBalance());
}