#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void Voice()
	{
		cout << "AnimalVoice";
	}
};

class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "Meow!" << endl;
	}
};

class Bird : public Animal
{
public:
	void Voice() override
	{
		cout << "Tweat!" << endl;
	}
};

class Fish : public Animal
{
public:
	void Voice() override
	{
		cout << "Bulb..." << endl;
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
		a->Voice();

	delete animals[0];
	delete animals[1];
	delete animals[2];
	delete animals[3];
}