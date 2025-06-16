#include "Array.h"
#include <ctime>
#include <algorithm>

std::vector<double> generateArray(int central_element_param, int random_numbers_param)
{
	std::vector<double> array(17);
	int center = 8;

	array[center] = central_element_param;

	for (int i = center + 1; i < array.size(); i++)
	{
		array[i] = array[i - 1] / 2.0;
	}

	srand(time(0));
	for (int i = 0; i < center; i++)
	{
		if (i < random_numbers_param) {
			array[i] = -100 + rand() % 200;
		}
		else {
			array[i] = 0;
		}
	}

	return array;
}

double calculateSumBetweenMinMax(const std::vector<double>& array)
{
	double sum = 0;

	auto min_i = std::min_element(array.begin(), array.end());
	auto max_i = std::max_element(array.begin(), array.end());

	for (auto i = std::min(min_i, max_i); i != std::max(min_i, max_i); i++)
	{
		if (*i > 0) {
			sum += *i;
		}
	}

	return sum;
}

void sortArray(std::vector<double>& array)
{
	std::sort(array.begin(), array.end());
}