  #include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char helper) {
    // Base case: if only one disk, move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to helper, using destination as auxiliary
    towerOfHanoi(n - 1, source, helper, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from helper to destination, using source as helper
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    // Function call to solve the Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B, C are the rod names (source, destination, helper)
    
    return 0;
}
