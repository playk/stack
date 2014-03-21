#include <iostream>
 
#include "stack.h"
using namespace std; 

int main()
{
        Stack<int> St;
		int n;
		int val;
        St.push('a');
        St.push('b');
        St.push('d');
        St.push('c');
		cin >> n;
		for (int id = 0; id < n; id++)
		{
			cin	>> val;
			St.push(val);
		}
        
        cout << "Stack:";
                St.print();
        
        system("pause");
}