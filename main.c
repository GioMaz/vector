#include <stdio.h>
#include "vector.h"

typedef struct {
    size_t size;
    size_t capacity;
    int64_t *items;
} Vector;

void test(Vector v)
{
    v_init(v);
    v_append(v, 1);
    v_append(v, 2);
    v_append(v, 3);
    v_append(v, 4);
    v_append(v, 5);
    v_append(v, 6);
    v_append(v, 7);
    v_append(v, 8);
    for (size_t i = 0; i < v.size; i++) {
        printf("%lld\n", v.items[i]);
    }
    free(v.items);
}

void test_pointer(Vector *v)
{
    v_init(*v);
    v_append(*v, 1);
    v_append(*v, 2);
    v_append(*v, 3);
    v_append(*v, 4);
    v_append(*v, 5);
    v_append(*v, 6);
    v_append(*v, 7);
    v_append(*v, 8);
    for (size_t i = 0; i < v->size; i++) {
        printf("%lld\n", v->items[i]);
    }
    free(v->items);
}

int main()
{
    // Vector v1;
    // test(v1);
    Vector v2;
    test_pointer(&v2);

    return 0;
}
