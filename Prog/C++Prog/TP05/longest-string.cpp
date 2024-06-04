const char* longest(const char* pa[]) {
    char *ptr = nullptr;
    int max = 0;

    for (int i = 0; pa[i] != nullptr; i++) {
        int a = 0, len = 0;
        while (pa[i][a]) {
            a++; len++;
        }

        if (len >= max) {
            max = len;
            ptr = (char*) pa[i];
        }
    }

    return ptr; 
}

