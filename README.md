# Random_function for c++

Библиотека написана на языке C++ и предназначена для облегчения работы с генерацией рандомных чисел и их же в заданном диапазоне.

Функции библиотеки:


	random(int from, int before)

функция принимает значение от и до какого числа генерировать число.


	random(int from, int before, int iskl) 

перегрузка вышеупомянутой функции. Принимает такие же параметры и параметр "исключение" - число которое не выйдет при генерации.


	random()
перегрузка функции 

	random(int from, int before)

Не принимает параметры, выдаёт рандомное число.


	random_ (int from, int before) 

разновидность функции 

	random(int from, int before)


	random(int from, int before)
возвращает значение в переданном диапазоне в формате (from <= NUMDER <= before), а random_(...) в формате (from < NUMDER < before).


	random_ (int from, int before, int iskl)

разновидность функции 

	random(int from, int before)

но возвращает значение в переданном диапазоне в формате (from < NUMDER < before) и имеет возможность передать число исключение.
