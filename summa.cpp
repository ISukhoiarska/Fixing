int main() {
    int a[] = {2, 3};
    auto len = sizeof(a) / sizeof(int);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum = sum + a[i];
    }

    std::cout << sum << std::endl;
}
