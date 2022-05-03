#include "arraylist.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
    int a = this->data[posi];
    this->data[posi] = this->data[posj];
    this->data[posj] = this->data[a];
    a = 0;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
    if(this->count == this->capacity)
    {
        expand(this->capacity);
    }
    int* newdata = new int[this->capacity];
    newdata[0] = element;
    for(int i = 1; i < this->capacity; ++i)
    {
        newdata[i] = this->data[i-1];
    }
    delete[] data;
    this->data = newdata;
    this->count++;
}

void ArrayList::insert(int element, int position)
{
    if(this->count == this->capacity)
    {
        expand(this->capacity);
    }
    int* newdata = new int[this->capacity];
    for(int i = 0; i < position; ++i)
    {
        newdata[i] = this->data[i];
    }
    newdata[position] = element;
    for(int i = position + 1; i < this->capacity; ++i)
    {
        newdata[i] = this->data[i - 1];
    }
    delete[] data;
    this->data = newdata;
    this->count++;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extractbegin()
{
    this->count--;
    int* newdata = new int[count];
    int extract = this->data[0];
    for(int i = 1; i < this->capacity; ++i)
    {
        newdata[i - 1] = this->data[i];
    }
    delete[] data;
    this->data = newdata;
    return extract;
}

int ArrayList::extract(int position)
{
    this->count--;
    if(position >= this->capacity)
    {
        pushend(0);
    }
    else if(position < 0)
    {
        pushbegin(0);
    }
    int* newdata = new int[this->count];
    for(int i = 0; i < position; ++i)
    {
        newdata[i] = this->data[i];
    }
    int extract = this->data[position];
    for(int i = position; i < this->capacity; ++i)
    {
        newdata[i] = this->data[i + 1];
    }
    delete[] data;
    this->data = newdata;
    return extract;
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

int ArrayList::Partition(int* data, int right, int left)
{
    int pivot = data[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j)
    {
        while (data[i] < pivot)
        {
            ++i;
        }
        while (data[j] > pivot)
        {
            --j;
        }
        if (i >= j)
        {
            swap(i++, j--);
        }
    }
    return j;
}

void ArrayList::QuickSort(int* data, int left, int right)
{
    if (left < right)
    {
        int q = Partition(data, left, right);
        QuickSort(data, left, q);
        QuickSort(data, q + 1, right);
    }
}

void ArrayList::sort()
{
    QuickSort(this->data, 0, this->capacity);
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}