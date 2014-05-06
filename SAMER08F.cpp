#include <iostream>
using namespace std;

int main() {
	while (true) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp == 0)
			break;
		double s = tmp * (tmp + 1.0) * (tmp + tmp + 1.0) / 6.0;
		printf("%d\n", int(s));
	}

	return 0;
}
