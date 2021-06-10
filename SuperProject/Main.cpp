#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void Voice()
	{
		cout << "AnimalVoice\n";
	}
};

class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "Woof!\n";
	}
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "Meow!\n";
	}
};

class Bird : public Animal
{
public:
	void Voice() override
	{
		cout << "Tweat!\n";
	}
};

class Fish : public Animal
{
public:
	void Voice() override
	{
		cout << "Bulb...\n";
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
}