// C++ program to demonstrate the use of virtual function

#include <iostream>
#include <string>
using namespace std;

class Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Animal() : type("Animal") {}

    // declare virtual function
    virtual string getType() {
        return type;
    }
};

class Dog : public Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Dog() : type("Dog") {}

    string getType() override {
        return type;
    }
};

class Cat : public Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Cat() : type("Cat") {}

    string getType() override {
        return type;
    }
};

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

int main() {
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}


// Output

// Animal: Animal
// Animal: Dog
// Animal: Cat

/*
Here, we have used the virtual function getType() and an Animal pointer ani in order to avoid repeating the print() function in every class.

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

In main(), we have created 3 Animal pointers to dynamically create objects of Animal, Dog and Cat classes.

// dynamically create objects using Animal pointers
Animal* animal1 = new Animal();
Animal* dog1 = new Dog();
Animal* cat1 = new Cat();

We then call the print() function using these pointers:

    When print(animal1) is called, the pointer points to an Animal object. So, the virtual function in Animal class is executed inside of print().
    When print(dog1) is called, the pointer points to a Dog object. So, the virtual function is overridden and the function of Dog is executed inside of print().
    When print(cat1) is called, the pointer points to a Cat object. So, the virtual function is overridden and the function of Cat is executed inside of print().
*/
