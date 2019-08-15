// Implement a template boolean IsSameClass() that takes class A and B as template parameters. 
// It should compare class A and B and return false when they are different classes and true if they are the same class.


template <typename T, typename U>
struct is_same
{
	static const bool value = false;
};

template <typename T>
struct is_same<T, T>
{
	static const bool value = true;
};


template <class A, class B>
bool IsSameClass() {
	return is_same<A, B>::value;
}
