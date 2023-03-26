void print_squares(int m, int n) {
    int area = m * n;
    if (area == 0) {
        return;
    }
    int side = (int) sqrt(area);
    while (side * side > area) {
        side--;
    }
    printf("%dx%d, ", side, side);
    print_squares(m - side, n);
}
