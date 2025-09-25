#include <iostream>
using namespace std;

/*
 * Abdoulaye Sedego
 * practicing pointers
 * did the problem by myself, I asked chatgpt to explain me when I am stuck; here are the prompt I used
 * 1-check my code so far, I have return the min value, but I am stuck on how to swap, guide me.
 * 2-check my code and explain( I needed my guidance)
 * 3-check, comment to explain, it is working now.
 *
 */

// Function that swaps the smallest and largest values among three integers
void swapMinMax(int *a, int *b, int *c) {
    // Step 1: Assume the minimum value is stored at 'a'
    int *min_val = a;
    if (*b < *min_val) min_val = b; // If value at b is smaller, update min_val
    if (*c < *min_val) min_val = c; // If value at c is smaller, update min_val

    // Step 2: Assume the maximum value is stored at 'a'
    int *max_val = a;
    if (*b > *max_val) max_val = b; // If value at b is larger, update max_val
    if (*c > *max_val) max_val = c; // If value at c is larger, update max_val

    // Step 3: Swap the values stored at the min and max addresses
    int temp = *min_val;    // Save the min value temporarily
    *min_val = *max_val;    // Put max value in min position
    *max_val = temp;        // Put saved min value in max position
}

int main() {
    int x, y, z;

    // Taking input from the user
    cin >> x >> y >> z;

    // Initializing pointers to the variables
    int *a = &x;
    int *b = &y;
    int *c = &z;

    // Show original values entered
    cout << "user input X: " << x << endl;
    cout << "user input Y: " << y << endl;
    cout << "user input Z: " << z << endl;

    cout << endl;

    // Show memory addresses of each variable
    cout << "Address of X: " << a << endl;
    cout << "Address of Y: " << b << endl;
    cout << "Address of Z: " << c << endl;

    cout << endl;

    // Show values by dereferencing (accessing via pointer)
    cout << "Value by Address X: " << *a << endl;
    cout << "Value by Address Y: " << *b << endl;
    cout << "Value by Address Z: " << *c << endl;

    cout << endl;

    // Print values before swap
    cout << "Original Order before swap: " << x << " " << y << " " << z << endl;

    // Call function to swap min and max
    swapMinMax(a, b, c);

    // Print values after swap (dereferencing pointers shows updated values)
    cout << "New Order after swap: " << *a << " " << *b << " " << *c << endl;

    return 0;
}

