#include "z:\\std_lib_facilities.h"

int main(int argc, char* argv[], char* env[])
{
	//��ʾ�����У�����
	for (int i = 0; i < argc; ++i)
	{
		cout << "Argv " << i << ": " << argv[i] << "\n";
	}
	int i = 0;
	while (env[i] != NULL) {
		cout << "env " << i << ": " << env[i] << "\n";
		++i;
	}

	//���������¶�����
	vector <double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	//��ʾvector���������������
	cout << "Your enter number: ";
	for (auto v : temps)
		cout << v << ", ";
	cout << "\n";
	
	//�����¶�ƽ��ֵ
	double sum = 0;
	for (auto v : temps)  //����Ϊint x��Ӧ�ô���
		sum += v;
	cout << "Average temperautre: " << sum / temps.size() << "\n";

	//�����¶ȵ���ֵ�������ϸ������ϵ���ֵ
	sort(temps);

	cout << "All temperature number after sort: ";
	for (auto v : temps)
		cout << v << ", ";
	cout << "\n";

	cout << "Median temperature: " << temps[temps.size() / 2] << "\n";

	keep_window_open("quit");
	return 0;
}