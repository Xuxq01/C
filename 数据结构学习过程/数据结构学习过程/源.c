L.r[0] = L.r[i];
for (j = i - 1; L.r[0].key < L.r[j].key; --j)
	L.r[j + 1] = L.r[j];
L.r[j + 1] = L.r[0];