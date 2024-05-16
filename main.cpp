#include <iostream>

class Entity
{
private:
	int m_X, m_Y;
    int var;
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
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity e;
	e.SetX(55);
	PrintEntity(e);

	const int MAX_AGE = 90;
	const int* a = new int;
	int const* b = new int;

	std::cout << "Hello Const" << std::endl;
	std::cin.get();
}