#include <iostream>

using namespace std;

int main() 
{
    int k, n;
    
    cout << "Sonni 10 likda kiriting: ";
    cin >> k;
    
    n = 2;
    
    string s = "";
    
    while(k > 0)
    {
    	s += ((k % n) + '0');
    	k /= n;
	}
	
	int p = 0;
	
	for(int i = s.length() - 1; i >= 0; i--)
	{
		p = (p * 10) + (s[i] - '0');
	}
	
	cout << endl << "Natija: " << p;
    return 0;
}

