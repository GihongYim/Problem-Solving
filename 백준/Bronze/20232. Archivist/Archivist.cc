#include <bits/stdc++.h>
using namespace std;

string win[3000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	win[1995] = "ITMO";
	win[1996] = "SPbSU";
	win[1997] = "SPbSU";
	win[1998] = "ITMO";
	win[1999] = "ITMO";
	win[2000] = "SPbSU";
	win[2001] = "ITMO";
	win[2002] = "ITMO";
	win[2003] = "ITMO";
	win[2004] = "ITMO";
	win[2005] = "ITMO";
	win[2006] = "PetrSU, ITMO";
	win[2007] = "SPbSU";
	win[2008] = "SPbSU";
	win[2009] = "ITMO";
	win[2010] = "ITMO";
	win[2011] = "ITMO";
	win[2012] = "ITMO";
	win[2013] = "SPbSU";
	win[2014] = "ITMO";
	win[2015] = "ITMO";
	win[2016] = "ITMO";
	win[2017] = "ITMO";
	win[2018] = "SPbSU";
	win[2019] = "ITMO";

	int year;

	cin >> year;
	cout << win[year] << '\n';

	return 0;
}