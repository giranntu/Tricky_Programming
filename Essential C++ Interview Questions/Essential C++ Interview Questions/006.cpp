// Consider the two code snippets below for printing a vector. 
// Is there any advantage of one vs. the other? Explain.


//Option 1:

//vector vec;
///* ... .. ... */
//for (auto itr = vec.begin(); itr != vec.end(); itr++) {
//	itr->print();
//}



//Option 2:

//vector vec;
///* ... .. ... */
//for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
//	itr->print();
//}



/*
	Although both options will accomplish precisely the same thing, the second option is better from a performance standpoint. 
	This is because the post-increment operator (i.e., itr++) is more expensive than pre-increment operator (i.e., ++itr). 
	The underlying implementation of the post-increment operator makes a copy of the element before incrementing it 
	and then returns the copy.

	That said, many compilers will automatically optimize the first option by converting it into the second.
*/