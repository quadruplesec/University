char* duplicate(const char s[]) {
    if (!s[0]) {
        char *ret_str = new char[1];
        ret_str[0] = '\0';
        return ret_str;
    }

    int i = 0, len = 0;
    while (s[i]) {
        i++; len++;
    }

    char *ret_str = new char[len + 1];
    ret_str[len] = '\0';

    for (int i = 0; i < len; i++) {
        ret_str[i] = s[i];
    }

    return ret_str;
}