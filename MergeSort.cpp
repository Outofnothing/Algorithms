#include <iostream>
using namespace std;

template<typename T>
T* merge_sort(T list[], unsigned int length)
{
	if (length == 1)
	{
		return list;
	}
	else
	{
		unsigned int head_len = length / 2;
		unsigned int tail_len = length - length / 2;
		T* _head = new T[head_len];
		T* _tail = new T[tail_len];
		for (unsigned int i = 0; i < head_len; i++)
		{
			_head[i] = list[i];
		}
		for (unsigned int i = 0; i < tail_len; i++)
		{
			_tail[i] = list[i+head_len];
		}
		_head = merge_sort(_head, head_len);
		_tail = merge_sort(_tail, tail_len);
		T* result = new T[length];
		unsigned int head_cnt = 0, tail_cnt = 0;
		for (unsigned int cnt=0;cnt<length;cnt++)
		{
			if (head_cnt < head_len && tail_cnt < tail_len)
			{
				result[cnt] = (_head[head_cnt] <= _tail[tail_cnt])?_head[head_cnt++]:_tail[tail_cnt++];
			}
			else if ((head_cnt < head_len) && (tail_cnt == tail_len))
			{
				result[cnt] = _head[head_cnt++];
			}
			else if ((head_cnt == head_len && tail_cnt < tail_len))
			{
				result[cnt] = _tail[tail_cnt++];
			}
		}
		return result;
	}
}

int main()
{
	float A[] = { 1,2,3,2,1.45,-78 };
	unsigned int length = sizeof(A) / sizeof(float);
	cout << "size of a" << length << endl;
	float* B = merge_sort(A, length);
	for (unsigned int i = 0; i < length; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
}