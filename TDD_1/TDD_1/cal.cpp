class Account
{
public:
	explicit Account(int money)
	{
		balance = money;
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

private:
	int balance;
};