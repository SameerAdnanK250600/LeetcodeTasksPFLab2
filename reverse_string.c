void reverseStringHelper(char* s, int sSize, int i) {
    if (i >= sSize/2) {
        return;
    }
    char temp = s[sSize-i-1];
    s[sSize-i-1] = s[i];
    s[i] = temp;
    reverseStringHelper(s, sSize, ++i);
}

void reverseString(char* s, int sSize) {
    reverseStringHelper(s, sSize, 0);
}
