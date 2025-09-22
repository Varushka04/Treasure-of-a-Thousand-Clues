#pragma once
#include <vector>

template<class T>
class Score {
private :
	std::vector<T> data;
public :
	void add(T value) {
		data.push_back(value);
	}
	T getTotal() {
		T total = 0;
		for (T val : data) {
			total += val;

		}
		return total;
	}
	const std::vector<T>& getData() const {
		return data;
	}

	int getCount() const {
		return data.size();
	}

	void clear() {
		data.clear();
	}
};


