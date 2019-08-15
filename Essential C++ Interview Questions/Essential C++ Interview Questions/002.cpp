// C++ supports multiple inheritance.
// What is the “diamond problem” that can occur with multiple inheritance ? 
// Give an example.

/*
	It means that we cannot create hybrid inheritance using multiple and hierarchical inheritance.

	Let’s consider a simple example. A university has people who are affiliated with it. 
	Some are students, some are faculty members, some are administrators, and so on. 
	So a simple inheritance scheme might have different types of people in different roles, 
	all of whom inherit from one common “Person” class. 
	The Person class could define an abstract getRole() method which would then be overridden by its subclasses 
	to return the correct role type.

	But now what happens if we want to model the role of a Teaching Assistant (TA)? 
	Typically, a TA is both a grad student and a faculty member. 
	This yields the classic diamond problem of multiple inheritance and the resulting ambiguity regarding the TA’s getRole() method:

	Which getRole() implementation should the TA inherit? 
	That of the Faculty Member or that of the Grad Student? 
	The simple answer might be to have the TA class override the getRole() method and return newly-defined role called “TA”. 
	But that answer is also imperfect as it would hide the fact that a TA is, in fact, both a faculty member and a grad student.
*/