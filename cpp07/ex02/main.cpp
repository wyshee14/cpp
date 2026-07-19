# include "Array.hpp"

int main()
{
	Array<int> emptyArr;
	emptyArr.getValues();
	Array<int> intArray(4);
	intArray.getValues();
	Array<int> copyArray(intArray);
	copyArray.getValues();

	return 0;
}
