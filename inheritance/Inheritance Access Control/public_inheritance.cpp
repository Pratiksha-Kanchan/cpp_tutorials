// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}


// Output

// Private = 1
// Protected = 2
// Public = 3

/*
Here, we have derived PublicDerived from Base in public mode.

As a result, in PublicDerived:

    prot is inherited as protected.
    pub and getPVT() are inherited as public.
    pvt is inaccessible since it is private in Base.

Since private and protected members are not accessible from main(), we need to create public functions getPVT() and getProt() to access them:

// Error: member "Base::pvt" is inaccessible
cout << "Private = " << object1.pvt;

// Error: member "Base::prot" is inaccessible
cout << "Protected = " << object1.prot;

Notice that the getPVT() function has been defined inside Base. But the getProt() function has been defined inside PublicDerived.

This is because pvt, which is private in Base, is inaccessible to PublicDerived.

However, prot is accessible to PublicDerived due to public inheritance. So, getProt() can access the protected variable from within PublicDerived.
Accessibility in public Inheritance
Accessibility
					private members
					protected members
					public members
			
Base Class
					Yes
					Yes
					Yes
			
Derived Class
					No
					Yes
					Yes
*/
