#pragma once

#include <vector>
#include <string>
#include <iostream>

template <typename Container, typename Element>
std::size_t find_at(Container c, Element el)
{
	for (int i = 0; i < c.size(); ++i)
		if (c[i] == el) return i;
	return c.size();
}

namespace paracefas {

class CommandLineArgs
{
private:
	std::vector<std::string> m_argv;
	std::vector<std::string> m_names;
public:
	explicit CommandLineArgs(int, char const**, std::initializer_list<std::string>);
	explicit CommandLineArgs(int, char const**);

	void GetList() const;

	void GetValue(std::string, std::string&) const;
	void GetValue(std::string, double&) const;

	double		GetDouble(std::string) const;
	std::string GetString(std::string) const;
};

}