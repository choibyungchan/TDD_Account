class Account
{
public:
	explicit Account(int money)
	{
		balance = money;
		percentage = 0;
	}

	int getBalance()
	{
		return balance;
	}

	void withdraw(int money)
	{
		if ((balance - money) < 0) return;
		balance -= money;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void compound_interest()
	{
		balance *= (1 + percentage/100);
	}

	void compound_interest_setter(int percent)
	{
		percentage = percent;
	}

	void years_compound_interest(int years)
	{
		for(int year=0;year<years;year++)
		{
			compound_interest();
		}
	}

private:
	int balance;
	double percentage;
};