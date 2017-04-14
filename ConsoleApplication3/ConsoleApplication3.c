#include <stdio.h>
#include <windows.h>
#define TAX_RATE 0.2		// define에는 세미콜론 (;)을 넣지 않는다. 소수점이므로 %f를 사용해야 함.

int main(void)
{
	const int MONTHS = 12
	int a_salary, b_salary;

	printf("월급을 입력하세요: ");
	scanf("%d", &a_salary);

	b_salary = MONTHS * a_salary; // 순수입 계산
	printf("연봉은 %d 만 원입니다.\n", b_salary);
	printf("세금은 %f 만 원입니다.\n", b_salary * TAX_RATE);

	Sleep(30000);

	return 0;

}
