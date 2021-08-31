#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <numeric>

//write merge() function

using namespace std;

template <typename T>
vector<T> merge(vector<T>& arr1, vector<T>& arr2) 
{
	vector<T> merged;
	
	auto iter1 = arr.begin();
	auto iter2 = arr2.begin();
	
	while (iter != arr1.end() && iter2 != arr.end())
	{
		if (*iter1 < *iter2)
		{
			merged.emplace_back(&iter1);
			iter++;
		}
		else
		{
			merged.emplace_back(*iter2);
			iter2++;
		}
	}
	if (iter1 != arr.end())
	{
		for (; iter != arr1.end(); iter1++)
			merged.emplace_back(*iter1);
		}
		else
		{
			for (; iter2 != arr2.end(); iter2++)
			merged.emplace_back(*iter2);
		}
	return merged;
}
	
	
		
		
