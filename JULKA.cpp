#include <iostream>
#include <string>
using namespace std;

string dodaj(string a, string b)
{
	string sum;
	a = string(a.rbegin(), a.rend());
	b = string(b.rbegin(), b.rend());

	int n = a.size() - b.size();

	if (n > 0)
		for (int i = 0; i < n; i++)
			b += "0";
	else if (n < 0)
		for (int i = 0; i < -n; i++)
			a += "0";

	int tmp = 0;
	for (int i = 0; i < a.size(); i++)
	{
		int x = (a.at(i) - 48) + (b.at(i) - 48) + tmp;
		sum += 48 + x % 10;
		tmp = x/10;
	}
	while (tmp != 0)
	{
		sum += 48 + tmp % 10;
		tmp /= 10;
	}
	return string(sum.rbegin(), sum.rend());
}
string du(string a, string b)
{
	string du;
	a = string(a.rbegin(), a.rend());
	b = string(b.rbegin(), b.rend());

	int n = a.size() - b.size();

	if (n > 0)
		for (int i = 0; i < n; i++)
			b += "0";
	else if (n < 0)
		for (int i = 0; i < -n; i++)
			a += "0";

	int tmp = 0;
	for (int i = 0; i < a.size(); i++)	
	{
		int x = (a.at(i) - 48) - (b.at(i) - 48) - tmp;
		if (x < 0)
		{
			x += 10;
			tmp = 1;
		}
		else 
			tmp = 0;
		du += 48 + x; 
	}
	du = string(du.rbegin(), du.rend());
	bool lead_zero = false;
	string ret;
	for (int i = 0; i < du.size(); i++)
	{
		if (du.at(i) == '0')
		{
			if (lead_zero)
				ret += du.at(i);
		}
		else if (du.at(i) != '0')
		{
			lead_zero = true;
			ret += du.at(i);
		}
	}
	return ret;
}
string nadwa(string a)
{
	string du;
	int tmp = 0;
	for (int i = 0; i < a.size(); i++)
	{
		int x = a.at(i) - 48 + tmp;
		if (x % 2 == 0)
		{
			tmp = 0;
			du += x/2 + 48;
		}
		else
		{
			du += x/2 + 48;
			tmp = 10;
		}
	}
	bool lead_zero = false;
	string ret;
	for (int i = 0; i < du.size(); i++)
	{
		if (du.at(i) == '0')
		{
			if (lead_zero)
				ret += du.at(i);
		}
		else if (du.at(i) != '0')
		{
			lead_zero = true;
			ret += du.at(i);
		}
	}
	return ret;
}

int main()
{
	string sum[10], k[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> sum[i];
		cin >> k[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << nadwa(dodaj(sum[i], k[i])) << "\n" << nadwa(du(sum[i], k[i])) << "\n";
	}

	return 0;
}
