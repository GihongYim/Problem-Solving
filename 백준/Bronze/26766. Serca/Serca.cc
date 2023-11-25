#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	const string heart =" @@@   @@@ \n\\
@   @ @   @\n\\
@    @    @\n\\
@         @\n\\
 @       @ \n\\
  @     @  \n\\
   @   @   \n\\
    @ @    \n\\
     @     \n";

	 int n;
	 cin >> n;

	 for (int i = 0; i < n; i++) {
		cout << heart;
	 }
	 return 0;
}