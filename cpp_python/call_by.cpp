#include <iostream>
#include <stdio.h>
#include "page_80.h"

void call_by_ref_pointer(int *a, int *b)
{
	*a += 100;
	*b += 100;
	std::cout << *a << ' ' << *b << std::endl;
}
void call_by_ref(int &a, int &b)
{
	a += 10;
	b += 10;
	std::cout << a << ' ' << b << std::endl;
}
void call_by_value(int a, int b)
{
	a += 200;
	b += 200;
	std::cout << a <<' '<< b << std::endl;
}


int main(void)
{
	int t_a = 123;
	int t_b = 321;
	int* t_pa = &t_a;
	int* t_pb = &t_b;
	int& t_ra = t_a;
	int& t_rb = t_b;
	std::cout << &t_a << std::endl;
	std::cout << *t_pa << std::endl;
	std::cout << t_pa << std::endl;
	std::cout << &t_pa << std::endl;

	call_by_ref_pointer(t_pa, t_pb);
	call_by_ref(t_a, t_b);
	call_by_value(t_a, t_b);
	call_by_ref(t_ra, t_rb);

	std::cout << t_a << ' ' << t_b << std::endl;
	std::cout << "Page 80, ���� 2-1" << std::endl;
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	SwapRef::swap_by_ref(ptr1, ptr2);
	std::cout << *ptr1 << " " << *ptr2 << std::endl;

}
