#include "z:\\std_lib_facilities.h"

int main(int argc, char* argv[], char* env[])
{
	//显示命令行，参数
	for (int i = 0; i < argc; ++i)
	{
		cout << "Argv " << i << ": " << argv[i] << "\n";
	}
	int i = 0;
	while (env[i] != NULL) {
		cout << "env " << i << ": " << env[i] << "\n";
		++i;
	}

	//读入若干温度数据
	vector <double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	//显示vector容器中输入的数据
	cout << "Your enter number: ";
	for (auto v : temps)
		cout << v << ", ";
	cout << "\n";
	
	//计算温度平均值
	double sum = 0;
	for (auto v : temps)  //书上为int x，应该错误。
		sum += v;
	cout << "Average temperautre: " << sum / temps.size() << "\n";

	//计算温度的中值：并非严格意义上的中值
	sort(temps);

	cout << "All temperature number after sort: ";
	for (auto v : temps)
		cout << v << ", ";
	cout << "\n";

	cout << "Median temperature: " << temps[temps.size() / 2] << "\n";

	keep_window_open("quit");
	return 0;
}