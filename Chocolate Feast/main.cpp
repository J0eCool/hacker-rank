#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numCases;
    cin >> numCases;

    for (int i = 0; i < numCases; i++)
    {
	    int cash;
	    int price;
	    int wrappersPerFreebie;

    	cin >> cash;
    	cin >> price;
    	cin >> wrappersPerFreebie;

	    int count = 0;
	    int unusedWrappers = 0;

	    while (cash >= price || unusedWrappers >= wrappersPerFreebie)
	    {
	    	int toBuy = cash / price;
	    	int freebie = unusedWrappers / wrappersPerFreebie;
	    	cash -= toBuy * price;
	    	unusedWrappers -= freebie * wrappersPerFreebie;

	    	int toAdd = toBuy + freebie;
	    	count += toAdd;
	    	unusedWrappers += toAdd;
	    }

    	cout << count << endl;
    }

    return 0;
}
