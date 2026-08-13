#include <iostream>
#include <ostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Reverses a C-style string in-place.
 * 
 * Swaps characters from the beginning and end of the string,
 * moving towards the center. Uses O(1) additional memory.
 * 
 * @param str Null-terminated C-string to be reversed.
 * @pre str must point to a valid, writable memory buffer.
 * @post The original string is modified; no new memory is allocated.
 * 
 * @warning Does NOT handle empty strings or null pointers.
 *          Caller must ensure str != nullptr.
 */
void reverse_string(char* input_string){
    // Get length excluding the null-terminator
    unsigned int string_size = strlen(input_string);

    // Iterate only to the middle to avoid double-swap
    // For odd length, middle element stays in place
    for (int i = 0; i < string_size / 2; i++){
        // Swap symmentrical characters: i-th from left with i-th from right
        char symbol = input_string[i];
        input_string[i] = input_string[string_size - 1 - i];
        input_string[string_size - 1 - i] = symbol;
    }
}

int main(void){
    char input_string[256];
    cout << "Enter your string" << endl;
    cin >> input_string;
    reverse_string(input_string);
    cout << "Reverse string - " << input_string;
    return 0;
}