#include <iostream>
This line includes the necessary header file iostream for input and output operations.

cpp
Copy code
long Factorial(int no) {
    if (no == 0 || no == 1) {
        return 1;
    }
    
    long result = 1;
    for (int i = 2; i <= no; ++i) {
        result *= i;
    }
    return result;
}
Here, the Factorial function takes an integer no as input and calculates the factorial of no. It starts by checking if no is 0 or 1; in those cases, it directly returns 1 (since the factorial of 0 and 1 is 1).

If no is greater than 1, it initializes a variable result to 1 and then uses a loop to calculate the factorial by multiplying result with each number from 2 to no. After the loop, the function returns the calculated factorial.

cpp
Copy code
long nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0; // Invalid input
    }
    
    return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
The nCr function takes two integer inputs, n and r, and calculates the nCr value using the provided formula: nCr = n! / (r! * (n - r)!).

Before performing the calculation, the function first checks if the input values are valid. If r is negative or greater than n, it returns 0 to indicate invalid input.

If the input values are valid, it calculates the nCr value by using the previously defined Factorial function to calculate the factorials of n, r, and n - r, and then performs the division.

cpp
Copy code
int main() {
    int n, r;
    
    std::cout << "Enter value of n: ";
    std::cin >> n;
    
    std::cout << "Enter value of r: ";
    std::cin >> r;
    
    if (r < 0 || n < 0) {
        std::cout << "Invalid input." << std::endl;
    } else {
        long result = nCr(n, r);
        std::cout << "nCr(" << n << ", " << r << ") = " << result << std::endl;
    }
    
    return 0;
}
The main function is where the program starts its execution. It first declares two integer variables n and r.

Then, it uses std::cout to prompt the user to enter the value of n and std::cin to read the user input and store it in the variable n.

Similarly, it prompts the user to enter the value of r and reads the input, storing it in the variable r.

Next, it checks whether the input values are valid (not negative). If they are not valid, it prints an error message. Otherwise, it calculates the nCr value using the nCr function and displays the result.

Finally, the main function returns 0, indicating successful execution.

Overall, this program demonstrates the calculation of nCr using factorial functions and takes user input to perform the calculation for specific values of n and r.s