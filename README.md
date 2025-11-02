# Sorting and Searching Algorithms in C

This repository contains C implementations of various fundamental sorting and searching algorithms. It serves as a practical resource for understanding and comparing the performance and logic of these core computer science concepts.

## Algorithms Implemented

### 📈 Sorting Algorithms

* **Bubble Sort** (`bubble-sort.c`)
    * A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
* **Insertion Sort** (`insertion-sort.c`)
    * An efficient algorithm for small data sets that builds the final sorted array one item at a time.
* **Selection Sort** (`selection-sort.c`)
    * An in-place comparison sorting algorithm that divides the list into a sorted and an unsorted sublist.
* **Merge Sort** (`mergesort.c`)
    * An efficient, stable, divide-and-conquer sorting algorithm.
* **Quick Sort** (`quick-sort.c`)
    * An efficient, in-place, divide-and-conquer sorting algorithm.

### 🔎 Searching Algorithms

* **Linear Search** (`linearsearch.c`)
    * A sequential search algorithm that checks every element in a list until the target value is found.
* **Binary Search** (`binarysearch.c`)
    * An efficient algorithm for finding an item from a **sorted** list of items.

## How to Use

### Prerequisites

To compile and run these programs, you will need a C compiler installed on your system (e.g., `gcc`).

### Compiling and Running

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/DEMiHAT/searching-sorting
    cd searching-sorting
    ```

2.  **Compile a program:**
    Use `gcc` (or your preferred C compiler) to compile the desired `.c` file.

    ```bash
    # Example for Merge Sort
    gcc mergesort.c -o mergesort
    
    # Example for Binary Search
    gcc binarysearch.c -o binarysearch
    ```

3.  **Run the executable:**
    After compilation, run the generated executable file.

    ```bash
    ./mergesort
    ./binarysearch
    ```

## Contributing

Contributions are welcome! If you find any issues, have suggestions for improvements, or want to add more algorithms, please feel free to open an issue or submit a pull request.
