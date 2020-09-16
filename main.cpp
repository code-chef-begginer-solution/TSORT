#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the array_size */
    size_t array_size;
    std::cin >> array_size;

    /* declare a direct-access-table of
     * size stored in variable capacity */
    const size_t capacity{1000000};
    auto* hash_array = new size_t[capacity] {0};

    /* get the array elements */
    size_t number;
    for (size_t i{0}; i < array_size; i++) {
        std::cin >> number;

        /* increase occurrence of number i.e.
         * update the direct access table */
        hash_array[number]++;
    }

    /* sort the array elements */
    for (size_t i{0}; i < capacity; i++) {
        if (hash_array[i] != 0) {
            /* if element i is present in the array */

            for (size_t j{1}; j <= hash_array[i]; j++) {
                /* print for each occurrence
                 * of element i in the array */
                std::cout << i << std::endl;
            }
        }
    }

    /* delete the heap memory */
    delete [] hash_array;

    return 0;
}