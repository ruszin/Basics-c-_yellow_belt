#include <iostream>
#include <vector>
#include <map>
#include<sstream>
#include <string>
#include <tuple>

using namespace std;


template<typename F, typename S>
map<F,S> Sqr(map<F,S> v) {
	map<F, S> res;
	for (auto &i : v) {
		res[i.first] = Sqr(i.second);
	}
	return res;
}


template<typename F,typename S>
pair<F,S> Sqr(pair<F,S> v) {
	return { Sqr(v.first),Sqr(v.second) };
}

template<typename T>
vector<T> Sqr(vector<T> v) {
	for (auto& i : v) {
		i = Sqr(i);
	}
	return v;
}

template<typename T> 
T Sqr(T v) {
	return v * v;
}

void main()
{
	vector<int> v = { 1, 2, 3 };
	cout << "vector:";
	for (int x : Sqr(v)) {
		cout << ' ' << x;
	}
	cout << endl;
	map<int, pair<int, int>> map_of_pairs = {
	{4, {2, 2}},
	{7, {4, 3}}
	};
	cout << "map of pairs:" << endl;
	for (const auto& x : Sqr(map_of_pairs)) {
		cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
	}
	system("pause");
}


int main() {
	3.   int a = 100;
	4.   int b = 0;
	5.   bool flag = getFlag();
	6.   while (a > b) {
		7.     if (flag) {
			8.       b += 2;
			9.       for (int i = 0; i <= calcCPU(a, b); i++) {
				10.         int grep = initGrep(i + 1);
				11.         b += grep % 2;
				12.
			}
			13.       std::cout << a;
			14.
		}
		15.     else {
			16.       a -= 3;
			17.       std::cout << b;
			18.
		}
		19.
			20.     if (a % 3 == 0) {
			21.       std::cout << a;
			22.
		}
		23.     else {
			24.       a -= 2;
			25.       std::cout << b;
			26.
		}
		27.
	}
	28.   std::cout << "a = ", a, " b = ", b;
	29.   return 0;
	30.
}