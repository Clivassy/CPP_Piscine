/*

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : 
	_accountIndex(0),
	_amount(0),
	_nbDeposits(0), 
	_nbWithdrawals(0)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

int
Account::getNbAccounts()
{
	return (_nbAccounts);
}

int
Account::getTotalAmount()
{
	return (_totalAmount);
}

int
Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int
Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void
Account::_displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"%Y%d%m_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] ";
}

void
Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void
Account::displayStatus() const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

bool
Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (this->_amount - withdrawal >= 0)
	{
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout	<< "index:" << _accountIndex << ";"
					<< "p_amount:" << _amount << ";"
					<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "withdrawal:" << "refused"
				<< std::endl;
	return (false);
}

void
Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << deposit + _amount << ";"
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
	_totalAmount += deposit;
	this->_amount += deposit;
}

int
Account::checkAmount() const
{
	return (this->_amount);
}*/