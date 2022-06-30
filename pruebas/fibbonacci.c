int main() {
    int i; 
    int n=100; 
    int t1 = 0; 
    int t2 = 1; 
    int nextTerm;
    for (i = 1; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}