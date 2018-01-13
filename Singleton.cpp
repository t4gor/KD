
#include "Singleton.h"
#include "iostream"

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::p_pInstance)   // Only allow one instance of class to be generated.
		Singleton::p_pInstance = new Singleton.h;

	return Singleton::p_pInstance;
}

void Singleton::writeToLogFiles(0)
{
	cout << "Hello Singleton world" << endl;
}