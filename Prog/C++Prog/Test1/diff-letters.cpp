bool char_processing(char& c) {
    if (c <= 'z' && c >= 'a')
        return true;
    if (c <= 'Z' && c >= 'A') {
        c += 32;
        return true;
    }
    return false;
}

int diff_letters(const char a[], const char b[], char out[]) {
    int alpha[26]{0};

    for (int i = 0; a[i] != 0; i++) {
        char c = a[i];
        if (!char_processing(c)) continue;
        bool check = true;
        for (int x = 0; b[x] != 0; x++) {
            char d = b[x];
            if (!char_processing(d)) continue;
            if (c == d) check = false;
        }
        if (check) alpha[c - 'a'] = 1;
    }

    for (int i = 0; b[i] != 0; i++) {
        char c = b[i];
        if (!char_processing(c)) continue;
        bool check = true;
        for (int x = 0; a[x] != 0; x++) {
            char d = a[x];
            if (!char_processing(d)) continue;
            if (c == d) check = false;
        }
        if (check) alpha[c - 'a'] = 1;
    }

    int counter = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 1) 
            out[counter++] = 'a' + i;
    }
    
    out[counter] = 0;
    return counter;
}


