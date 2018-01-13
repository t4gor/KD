#include <string>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	int A[100][100], n1, n2;
private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};