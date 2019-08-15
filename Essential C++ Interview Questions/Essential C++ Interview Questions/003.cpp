// What is the error in the code below and how should it be corrected?

/*
my_struct_t* bar;

// ... do stuff, including setting bar to point to a defined my_struct_t object ... 
memset(bar, 0, sizeof(bar));

*/


/*
	The last argument to memset should be sizeof(*bar), not sizeof(bar). 
	sizeof(bar) calculates the size of bar (i.e., the pointer itself) rather than the size of the structure pointed to by bar.

	The code can therefore be corrected by using sizeof(*bar) as the last argument in the call to memset.

	A sharp candidate might point out that using *bar will cause a dereferencing error if bar has not been assigned. 
	Therefore an even safer solution would be to use sizeof(my_struct_t). 
	However, an even sharper candidate must know that in this case using *bar is absolutely safe within the call to sizeof, 
	even if bar has not been initialized yet, since sizeof is a compile time construct.
*/
