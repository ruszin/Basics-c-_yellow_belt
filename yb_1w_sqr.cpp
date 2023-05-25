#include <iostream>
#include <vector>
#include <map>
#include<sstream>
#include <string>
#include <tuple>
#include <cmath>

using namespace std;

template<typename T> vector<T> Sqr(vector<T> v);
template<typename F, typename S> map<F, S> Sqr(map<F, S> v);
template<typename F, typename S> pair<F, S> Sqr(pair<F, S> v);
template<typename T> T Sqr(T v);

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


