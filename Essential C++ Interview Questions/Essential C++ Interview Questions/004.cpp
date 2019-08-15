// What will i and j equal after the code below is executed ? 
// Explain your answer.

//#include <iostream>
//int main()
//{
//	int i = 5;
//	int j = i++;
//
//	std::cout << i;
//	std::cout << j;
//}

/*
	After the above code executes, i will equal 6, but j will equal 5.

	Understanding the reason for this is fundamental to understanding how the unary increment (++) and decrement (--) operators work in C++.

	When these operators precede a variable, the value of the variable is modified first and then the modified value is used. 
	For example, if we modified the above code snippet to instead say int j = ++i;, 
	i would be incremented to 6 and then j would be set to that modified value, so both would end up being equal to 6.

	However, when these operators follow a variable, the unmodified value of the variable is used and then it is incremented or decremented. 
	That’s why, in the statement int j = i++; in the above code snippet, j is first set to the unmodified value of i (i.e., 5) and then i is incremented to 6.
*/
