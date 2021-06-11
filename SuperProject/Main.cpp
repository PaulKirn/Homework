#include <iostream>
#include <cstdlib>

using namespace std;

class Animal
{
public:
	virtual ~Animal()
	{
		sayGoodbye();
	}
	virtual void Voice()
	{}
	virtual void sayGoodbye()
	{}
};

class Dog : public Animal
{
public:
	virtual ~Dog()
	{
		sayGoodbye();
	}
	void Voice() override
	{
		cout << "Woof!" << endl;
	}
	virtual void sayGoodbye()
	{
		cout << "'whimping'" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual ~Cat()
	{
		sayGoodbye();
	}
	void Voice() override
	{
		cout << "Meow!" << endl;
	}
	virtual void sayGoodbye()
	{
		cout << "'hissing'" << endl;
	}
};

class Bird : public Animal
{
public:
	virtual ~Bird()
	{
		sayGoodbye();
	}
	void Voice() override
	{
		cout << "Tweat!" << endl;
	}
	virtual void sayGoodbye()
	{
		cout << "'flies away'" << endl;
	}
};

class Fish : public Animal
{
public:
	virtual ~Fish()
	{
		sayGoodbye();
	}
	void Voice()  override
	{
		cout << "Bulb..." << endl;
	}
	virtual void sayGoodbye()
	{
		cout << "'gurgles'" << endl;
	}
};

int main()
{
	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Bird();
	animals[3] = new Fish();

	for (Animal* a : animals)
	{
		a->Voice();
		delete a;
	}
		

	//delete animals[0];
	//delete animals[1];
	//delete animals[2];
	//delete animals[3];


}