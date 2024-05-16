#include <iostream>

class Entity
{
private:
	int m_X, m_Y;
    int var;
	std::string m_Name;
    int m_Debug_Cout = 0;
public:
	int GetX() const
	{
		return m_X;
	}

	int GetX()
	{
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}

	const std::string& GetName() const 
	{ 
		return m_Name; 
	}
	std::string& GetName()
	{
		m_Debug_Cout++;
		return m_Name;
	}

	void SetName(std::string name)
	{
		m_Name = name;
	}

};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}
void PrintName(const Entity& name)
{
	std::cout << name.GetName() << std::endl;
}

int main()
{
	Entity e;
	e.SetX(55);
	PrintEntity(e);

	Entity name;
	name.SetName("Hello");
	PrintName(name);

	int x = 8;
	auto f = [=]() mutable
		{
			x++;
			std::cout << x << std::endl;
		};

	f();


	const int MAX_AGE = 90;
	const int* a = new int;
	int const* b = new int;

	std::cout << "Hello Const" << std::endl;
	std::cin.get();
}