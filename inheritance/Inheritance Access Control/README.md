C++ Public, Protected and Private Inheritance

In this tutorial, we will learn to use public, protected and private inheritance in C++ with the help of examples.

In C++ inheritance, we can derive a child class from the base class in different access modes. For example,

class Base {
.... ... ....
};

class Derived : public Base {
.... ... ....
};

Notice the keyword public in the code

class Derived : public Base

This means that we have created a derived class from the base class in public mode. Alternatively, we can also derive classes in protected or private modes.

These 3 keywords (public, protected, and private) are known as access specifiers in C++ inheritance.
public, protected and private inheritance in C++

public, protected, and private inheritance have the following features:

    public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
    protected inheritance makes the public and protected members of the base class protected in the derived class.
    private inheritance makes the public and protected members of the base class private in the derived class.

Note: private members of the base class are inaccessible to the derived class.

class Base {
  public:
    int x;
  protected:
    int y;
  private:
    int z;
};

class PublicDerived: public Base {
  // x is public
  // y is protected
  // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
};
