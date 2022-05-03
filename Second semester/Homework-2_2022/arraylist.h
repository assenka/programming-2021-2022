#pragma once
#include<ostream>

class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);	
public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();
	/// <summary>
	/// add element in the end of the list
	/// </summary>
	/// <param name="element"></param>
	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);
	int extractbegin();
	int extractend();
	int extract(int position);
	/// <summary>
	/// give an element by its index,
	/// if index greater/smaller than capacity --> new element will be added
	/// </summary>
	/// <param name="pos"></param>
	/// <returns></returns>
	int& operator[](int pos);
	/// <summary>
	/// sorting by QuickSort
	/// </summary>
	void sort();
	int Partition(int* array, int rignt, int left);
	void QuickSort(int* array, int right, int left);
	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};