//2.1.1
#include <stdio.h>
#include <Windows.h>

void main()
{
	int a, b, min, max;

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

	printf("Введите первое число =");
	scanf_s("%d", &a);
	printf("Введите второе число =");
	scanf_s("%d", &b);
	if (a < b) 
	{
		min = a;
		max = b;
	}
	else 
	{
		min = b;
		max = a;
	}
	printf("Большее число = %d\n", max);
	printf("Меньшее число = %d\n", min);
	printf("Персвое изменение = %d\n", min);
	printf("Второе изменние = %d\n", min);
}
//2.1.2
// #include <stdio.h>
//#include <Windows.h>
//
// void main()
// {
// 	int v1, v2, v3;
// 	int max;
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
// 	printf("Ввежите 3 числа:");
// 	scanf_s("%d%d%d", &v1, &v2, &v3);
//
// 	max = v1;
// 	if (v2 > max) {
// 		max = v2;
// 	}
// 	if (v3 > max) {
// 		max = v3;
// 	}
// 	printf("max = %d", max);
// }
//2.1.3 
//#include <stdio.h>
// #include <Windows.h>
//
//void main()
//{
//	int t;
// 
// 	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	printf("Введите температуру в комнате: ");
//	scanf_s("%d", &t);
//
//	if (t < 18) {
//		printf("Холодно\n");
//	}
//	if (t >= 18 && t < 22) {
//		printf("Прохладно\n");
//	}
//	if (t >= 22 && t < 26) {
//		printf("тепло\n");
//	}
//	if (t >= 26) {
//		printf("жарко\n");
//	}
//}
// //2.1.4 
  //#include <stdio.h>
  //#include <Windows.h>

  //void main()
  //{
  //	int v1, v2, v3, v4, v5;
  //	int max;

  //SetConsoleCP(1251);
  //SetConsoleOutputCP(1251);

  //	printf("Введите 5 чисел:");
  //	scanf_s("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);

  //	max = v1;
  //	if (v2 > max) {
  //		max = v2;
  //	}
  //	if (v3 > max) {
  //		max = v3;
  //	}
  //	if (v4 > max) {
  //		max = v4;
  //	}
  //	if (v5 > max) {
  //		max = v5;
  //	}
  //	printf("max = %d", max);
  //}
// //2.1.5 
//#include <stdio.h>
//#include <Windows.h>
//
// void main()
// {
// 	int t;
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
// 	printf("Введите температуру осенью: ");
// 	scanf_s("%d", &t);
//
// 	if (t<10){
// 		printf("Холодно\n");
// 	}
// 	if (t>=10 && t<16){
// 		printf("Прохладно\n");
// 	}
// 	if (t>=16 && t<22){
// 		printf("тепло\n");
// 	}
// 	if (t>=22){
// 		printf("жарко\n");
// 	}
// }
// //2.1.6
 //#include <stdio.h>
 //#include <Windows.h>

 //void main()
 //{
 //	int t;

 //   SetConsoleCP(1251);
 //   SetConsoleOutputCP(1251);

 //	printf("Введите цену хлеба: ");
 //	scanf_s("%d", &t);

 //	if (t<35){
 //		printf("Дешево\n");
 //	}
 //	if (t>=35 && t<65){
 //		printf("Нормально\n");
 //	}
 //	if (t>=65 && t<95){
 //		printf("Дорого\n");
 //	}
 //	if (t>=95){
 //		printf("Ужас дорого\n");
 //	}
 //}
// 2.1.7
// #include <stdio.h>
//#include <Windows.h>
//
//
// void main()
// {
// 	int t;
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
// 	printf("Введите скорость машины: ");
// 	scanf_s("%d", &t);
//
// 	if (t<5){
// 		printf("Очень медленно\n");
// 	}
// 	if (t>=5 && t<30){
// 		printf("Медленно\n");
// 	}
// 	if (t>=30 && t<60){
// 		printf("Нормально\n");
// 	}
// 	if (t>=60 && t<90){
// 		printf("Быстро\n");
// 	}
// 	if (t>=90 && t<110){
// 		printf("Очень быстро\n");
// 	}
// 	if (t>=110){
// 		printf("Мгновенно\n");
// 	}
// }
// 2.2.1
//#include <stdio.h>
// #include <Windows.h>
//
//void main() {
//	int i;
//	int n;
//
//	printf("n =");
//	scanf_s("%d", &n);
//
//	i = 1;
//	do {
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= n);
//}
//
//2.2.2
 //#include <stdio.h>
 //#include <Windows.h>
 //
 //void main(){
 //	int i;
 //	int stepen;

 //	stepen = 1;
 //	i = 0;

 //	do{
 //		printf("2^%d = %d\n", i, stepen);
 //		stepen = stepen*2;
 //		i = i+1;
 //	} while (i <= 5);
 //}
//2.2.3
// #include <stdio.h>
//#include <Windows.h>
//
// void main(){
// 	int sum;
// 	int year;
// 	float percent;
//
// 	printf("summa =");
// 	scanf_s("%d", &sum);
//
// 	printf("procent =");
// 	scanf_s("%f", &percent);
//
// 	year = 0;
// 	do {
// 		printf("%d RUB in %d year\n", sum, year);
// 		sum = (sum*(100+percent))/100;
// 		year = year + 1;
// 	} while (year <= 10);
// }
// 2.2.4
//#include <stdio.h>
// #include <Windows.h>
//
//void main()
//{
//
//	int n;
//	printf(" n =");
//	scanf_s("%d", &n);
//
//	int k = 0;
//	int p = 2;
//
//	printf(" pervie %d chetn chisel", n);
//	while (k < n) {
//		printf(" %d ", p);
//		p = p + 2;
//		k = k + 1;
//	}
//	printf(" \n ");
//}
//2.2.5
//#include <stdio.h>
// #include <Windows.h>
//
//void main()
//{
//	int n, a;
//	printf("col-vo n and cratn");
//	scanf_s("%d %d", &n, &a);
//
//	int k = 0;
//	int cr = a;
//
//	printf("pervie %d chisel, cratnix %d:", n, a);
//	while (k < n) {
//		printf(" %d ", cr);
//		cr = cr + a;
//		k = k + 1;
//	}
//	printf(" \n ");
//}
// 2.2.6
// #include <stdio.h>
//#include <Windows.h>
//
// void main()
// {
// 	int n;
// 	int sum = 0;
//
// 	printf("chisla dlya summa, v konce 0:\n");
//
// 	do {
// 		printf("vvedi chislo:");
// 		scanf_s("%d", &n);
// 		sum = sum + n;
// 	} while (n != 0);
// 	printf("Summa vsex chisel: %d\n", sum);
// }