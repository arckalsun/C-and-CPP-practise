#include<iostream>
#include<string>
#include "Sales_data.h"

int main(void)
{
	Sales_data data1, data2;
	
	double price = 0.0;
	//读入第一笔交易：ISBN, 销售数量, 单价
	std::cin >> data1.bookNO >> data1.units_sold >> price;
	//计算销售收入
	data1.revenue = data1.units_sold * price;
	
	//同上
	std::cin >> data2.bookNO >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	
	//输出两个Sales_data对象之和
	if (data1.bookNO == data2.bookNO)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//输出
		std::cout << data1.bookNO << " " << totalCnt
			<< " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue/totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN"
			<< std::endl;
		return -1;
	}
}
