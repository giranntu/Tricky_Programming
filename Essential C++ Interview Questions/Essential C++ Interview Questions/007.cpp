// Implement a template function IsDerivedFrom() 
// that takes class Cand class P as template parameters.
// It should return true when class C is derived from class Pand false otherwise.

/*
	This question tests understanding of C++ templates. 
	An experienced developer will know that this is already a part of the C++11 std library (std::is_base_of) 
	or part of the boost library for C++ (boost::is_base_of). 
	Even an interviewee with only passing knowledge should write something similar to this, 
	mostly likely involving a helper class:
*/

template<typename D, typename B>
class IsDerivedFromHelper
{
	class No { };
	class Yes { No no[3]; };

	static Yes Test(B*);
	static No Test(...);
public:
	enum { Is = sizeof(Test(static_cast<D*>(0))) == sizeof(Yes) };

};


template <class C, class P>
bool IsDerivedFrom() {
	return IsDerivedFromHelper<C, P>::Is;
}
