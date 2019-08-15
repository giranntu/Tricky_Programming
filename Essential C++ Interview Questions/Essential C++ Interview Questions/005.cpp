// Assuming buf is a valid pointer, 
// what is the problem in the code below ? 
// What would be an alternate way of implementing this that would avoid the problem ?



//size_t sz = buf->size();
//while (--sz >= 0)
//{
//	/* do something */
//}

/*
	The problem in the above code is that --sz >= 0 will always be true so you’ll never exit the while loop 
	(so you’ll probably end up corrupting memory or causing some sort of memory violation or having some other program failure, 
	depending on what you’re doing inside the loop).

	The reasons that --sz >= 0 will always be true is that the type of sz is size_t. size_t is really just an alias to one of the fundamental unsigned integer types. 
	Therefore, since sz is unsigned, it can never be less than zero (so the condition can never be true).

	One example of an alternative implementation that would avoid this problem would be to instead use a for loop as follows:
*/

// for (size_t i = 0; i < sz; i++)
// {
//	 /* do something */
// }
