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






C++ Function Overriding

As we know, inheritance is a feature of OOP that allows us to create derived classes from a base class. The derived classes inherit features of the base class.

Suppose, the same function is defined in both the derived class and the based class. Now if we call this function using the object of the derived class, the function of the derived class is executed.

This is known as function overriding in C++. The function in derived class overrides the function in base class.

![image](https://user-images.githubusercontent.com/84810132/172990828-45cc0a0e-9376-4ee3-b3ab-ccfb6a620153.png)


Access Overridden Function in C++

Access overridden function using object of derived class in C++
![image](https://user-images.githubusercontent.com/84810132/172990891-7c55ac7f-2c87-405b-8cf1-0b8c7ffdd327.png)


Access overridden function inside derived class in C++
![image](https://user-images.githubusercontent.com/84810132/172990984-4df2e35c-c467-45ad-9503-45a904e82dc8.png)




C++ Virtual Functions

A virtual function is a member function in the base class that we expect to redefine in derived classes.

Basically, a virtual function is used in the base class in order to ensure that the function is overridden. This especially applies to cases where a pointer of base class points to an object of a derived class.

For example, consider the code below:

class Base {
   public:
    void print() {
        // code
    }
};

class Derived : public Base {
   public:
    void print() {
        // code
    }
};

Later, if we create a pointer of Base type to point to an object of Derived class and call the print() function, it calls the print() function of the Base class.

In other words, the member function of Base is not overridden.

int main() {
    Derived derived1;
    Base* base1 = &derived1;

    // calls function of Base class
    base1->print();

    return 0;
}

In order to avoid this, we declare the print() function of the Base class as virtual by using the virtual keyword.

class Base {
   public:
    virtual void print() {
        // code
    }
};



Working of virtual functions in C++
![image](https://user-images.githubusercontent.com/84810132/172999912-231c6ba6-a458-4c1f-a8e5-0503a3065c75.png)


C++ override Identifier

C++ 11 has given us a new identifier override that is very useful to avoid bugs while using virtual functions.

This identifier specifies the member functions of the derived classes that override the member function of the base class.

For example,

class Base {
   public:
    virtual void print() {
        // code
    }
};

class Derived : public Base {
   public:
    void print() override {
        // code
    }
};

If we use a function prototype in Derived class and define that function outside of the class, then we use the following code:

class Derived : public Base {
   public:
    // function prototype
    void print() override;
};

// function definition
void Derived::print() {
    // code
}

Use of C++ override

When using virtual functions, it is possible to make mistakes while declaring the member functions of the derived classes.

Using the override identifier prompts the compiler to display error messages when these mistakes are made.

Otherwise, the program will simply compile but the virtual function will not be overridden.

Some of these possible mistakes are:

    Functions with incorrect names: For example, if the virtual function in the base class is named print(), but we accidentally name the overriding function in the derived class as pint().
    Functions with different return types: If the virtual function is, say, of void type but the function in the derived class is of int type.
    Functions with different parameters: If the parameters of the virtual function and the functions in the derived classes don't match.
    No virtual function is declared in the base class.

Use of C++ Virtual Functions

Suppose we have a base class Animal and derived classes Dog and Cat.

Suppose each class has a data member named type. Suppose these variables are initialized through their respective constructors.

class Animal {
   private:
    string type;
    ... .. ...
    public:
      Animal(): type("Animal") {}
    ... .. ...
};

class Dog : public Animal {
   private:
    string type;
    ... .. ...
    public:
      Animal(): type("Dog") {}
    ... .. ...
};

class Cat : public Animal {
   private:
    string type;
      ... .. ...
    public:
      Animal(): type("Cat") {}
    ... .. ...
};

Now, let us suppose that our program requires us to create two public functions for each class:

    getType() to return the value of type
    print() to print the value of type

We could create both these functions in each class separately and override them, which will be long and tedious.

Or we could make getType() virtual in the Animal class, then create a single, separate print() function that accepts a pointer of Animal type as its argument. We can then use this single function to override the virtual function.

class Animal {
    ... .. ...
   public:
    ... .. ...
    virtual string getType {...}
};

... .. ...
... .. ...

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

This will make the code shorter, cleaner, and less repetitive.
