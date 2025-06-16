#include "Data.h"

project::Data::Data(std::vector<double>& arr, bool sum_state, bool sort_state)
	: array(arr), need_sum(sum_state), need_sort(sort_state)
{
}

std::vector<double> project::Data::getArray()
{
	return array;
}

bool project::Data::getNeedSum()
{
	return need_sum;
}

bool project::Data::getNeedSort()
{
	return need_sort;
}

project::Data project::Data::operator=(Data^ other)
{
	array = other->getArray();
	need_sum = other->getNeedSum();
	need_sort = other->getNeedSort();
}
