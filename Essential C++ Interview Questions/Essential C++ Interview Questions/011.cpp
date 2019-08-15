// You are given library class Something as follows:

class Something {
public:
	Something() {
		topSecretValue = 42;
	}
	bool somePublicBool;
	int somePublicInt;
	std::string somePublicString;
private:
	int topSecretValue;
};

// Implement a method to get topSecretValue for any given Something* object.
// The method should be cross - platform compatible and not depend on sizeof(int, bool, string).




/*
	Create another class which has all the members of Something in the same order, 
	but has additional public method which returns the value. Your replica Something class should look like:
*/

class SomethingReplica {
public:
	int getTopSecretValue() { return topSecretValue; }
	bool somePublicBool;
	int somePublicInt;
	std::string somePublicString;
private:
	int topSecretValue;
};
// Then, to get the value:

int main(int argc, const char* argv[]) {
	Something a;
	SomethingReplica* b = reinterpret_cast<SomethingReplica*>(&a);
	std::cout << b->getTopSecretValue();
}

/*
	It’s important to avoid code like this in a final product, 
	but it’s nevertheless a good technique when dealing with legacy code, 
	as it can be used to extract intermediate calculation values from a library class. 
	(Note: If it turns out that the alignment of the external library is mismatched to your code, 
	you can resolve this using #pragma pack.)
*/
