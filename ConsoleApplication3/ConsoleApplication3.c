#include <stdio.h>
#include <windows.h>
#define TAX_RATE 0.2		// define���� �����ݷ� (;)�� ���� �ʴ´�. �Ҽ����̹Ƿ� %f�� ����ؾ� ��.

int main(void)
{
	const int MONTHS = 12
	int a_salary, b_salary;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &a_salary);

	b_salary = MONTHS * a_salary; // ������ ���
	printf("������ %d �� ���Դϴ�.\n", b_salary);
	printf("������ %f �� ���Դϴ�.\n", b_salary * TAX_RATE);

	Sleep(30000);

	return 0;

}
