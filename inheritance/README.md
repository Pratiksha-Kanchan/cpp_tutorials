Access Modes in C++ Inheritance

In our previous tutorials, we have learned about C++ access specifiers such as public, private, and protected.

So far, we have used the public keyword in order to inherit a class from a previously-existing base class. However, we can also use the private and protected keywords to inherit classes. For example,

class Animal {
    // code
};

class Dog : private Animal {
    // code
};

class Cat : protected Animal {
    // code
};

The various ways we can derive classes are known as access modes. These access modes have the following effect:

    public: If a derived class is declared in public mode, then the members of the base class are inherited by the derived class just as they are.
    private: In this case, all the members of the base class become private members in the derived class.
    protected: The public members of the base class become protected members in the derived class.

The private members of the base class are always private in the derived class.

To learn more, visit our C++ public, private, protected inheritance tutorial.
Member Function Overriding in Inheritance

Suppose, base class and derived class have member functions with the same name and arguments.

If we create an object of the derived class and try to access that member function, the member function in the derived class is invoked instead of the one in the base class.

The member function of derived class overrides the member function of base class.
