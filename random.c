// Function to generate a random uppercase letter
char randchar() {
    int alpha = rand() % 26;
    char array[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
    char rand_char = array[alpha];
    return rand_char;
}
