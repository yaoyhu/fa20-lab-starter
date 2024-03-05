int main() {
    int a[20];
    for (int i = 0; ; i++) {
        a[i] = i;
    }
}

// https://clang.llvm.org/docs/LeakSanitizer.html
// clang -fsanitize=address segfault_ex.c -g
// leaks -atExit -- ./a.out