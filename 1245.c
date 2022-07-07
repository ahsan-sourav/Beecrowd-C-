#include <stdio.h>

int main() {
	int n=1, i=0, tam[10000], j, k;
	char lado[10000];

	while (scanf("%d", &n) != EOF) {
		int par = 0;

		for (i=0; i<n; i++) {
			scanf("%d %c", &tam[i], &lado[i]);
		}

		for (j=0; j<n; j++) {
			for (k=0; k<n; k++) {
				if (tam[j] == tam[k] && lado[j] != lado[k]) {

					par += 1;
					tam[j] = 0;
					tam[k] = 0;
					lado[j] = 0;
					lado[k] = 0;
				}
			}
		}

		printf("%d\n", par);
	}

	return 0;
}
