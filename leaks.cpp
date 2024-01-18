#include <vector>

struct V :
std::vector<V>{};

int main (void)
{
	V v;
	v.emplace_back();
	v.swap(v.front());
}