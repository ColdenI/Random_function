#include <ctime>
#include <cstdlib>  

int random  (int from, int before) {
	srand(time(NULL)*rand());
int a = 0;
int i = 0;

if (from > before) {
//erorr
	return 0;
	}

if (before > 32000) {
//erorr
	return 0;
}

while (i != 1) {
	a = 0;
	if (before <= 10) {
		a = rand() % 10;
	}
	else if (before <= 100) {
		a = rand() % 100;       
	}
	else if (before <= 1000) {
		a = rand() % 1000;
	}
	else if (before <= 10000) {
		a = rand() % 10000;
	}
	else {
		a = rand();
	}

	if (a >= from && a <= before) {
		return a;
	}
	else {
		i = 0;
	}
}
}
int random_ (int from, int before) {
	srand(time(NULL)*rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before < 10) {
			a = rand() % 10;
		}
		else if (before < 100) {
			a = rand() % 100;
		}
		else if (before < 1000) {
			a = rand() % 1000;
		}
		else if (before < 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a > from && a < before) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random  (int from, int before, int iskl) {
	srand(time(NULL) * rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before <= 10) {
			a = rand() % 10;
		}
		else if (before <= 100) {
			a = rand() % 100;
		}
		else if (before <= 1000) {
			a = rand() % 1000;
		}
		else if (before <= 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a >= from && a <= before && a != iskl) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random_ (int from, int before, int iskl) {
	srand(time(NULL) * rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before < 10) {
			a = rand() % 10;
		}
		else if (before < 100) {
			a = rand() % 100;
		}
		else if (before < 1000) {
			a = rand() % 1000;
		}
		else if (before < 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a > from && a < before && a != iskl) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random() {
	srand(time(NULL) * rand());
	return rand();
}
