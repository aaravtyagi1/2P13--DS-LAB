#include <iostream>

int findElement(int array[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (array[middle] == key) {
            return middle;
        }
        else if (array[middle] < key) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    int data[] = {2, 5, 7, 10, 15, 20, 25};
    int n = sizeof(data) / sizeof(data[0]);
    int targetValue = 15;

    int index = findElement(data, n, targetValue);

    if (index != -1) {
        std::cout << "Target value found at position: " << index << std::endl;
    } else {
        std::cout << "Target value was not found." << std::endl;
    }

    return 0;
}




#include <iostream>

void performBubbleSort(int data[], int length) {
    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int swapVar = data[j];
                data[j] = data[j + 1];
                data[j + 1] = swapVar;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void displayArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original array: ";
    displayArray(numbers, arraySize);

    performBubbleSort(numbers, arraySize);

    std::cout << "Array after sorting: ";
    displayArray(numbers, arraySize);

    return 0;
}





#include <iostream>

int findMissingBySum(int sequence[], int totalCount) {
    long long expectedSum = (long long)totalCount * (totalCount + 1) / 2;
    
    long long actualSum = 0;
    for (int i = 0; i < totalCount - 1; i++) {
        actualSum += sequence[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int series[] = {1, 2, 3, 5, 6};
    int n_val = 6;

    std::cout << "The missing number (by sum) is: " << findMissingBySum(series, n_val) << std::endl;
    return 0;
}



#include <iostream>

int findMissingBySearch(int sequence[], int totalCount) {
    int start = 0;
    int end = totalCount - 2; 

    while (start <= end) {
        int pivot = start + (end - start) / 2;
        
        if (sequence[pivot] == pivot + 1) {
            start = pivot + 1;
        } else {
            end = pivot - 1;
        }
    }
    return start + 1;
}

int main() {
    int series[] = {1, 2, 3, 5, 6};
    int n_val = 6;

    std::cout << "The missing number (by search) is: " << findMissingBySearch(series, n_val) << std::endl;
    return 0;
}





#include <iostream>
#include <string>
int main() {
    std::string stringA, stringB;
    std::cout << "Enter the first string: ";
    getline(std::cin, stringA);
    std::cout << "Enter the second string: ";
    getline(std::cin, stringB);
    stringA.append(stringB);
    std::cout << "Joined String: " << stringA << std::endl;
    return 0;
}





#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string text;
    std::cout << "Enter a string to reverse: ";
    getline(std::cin, text);
    int left = 0, right = text.length() - 1;
    while(left < right){
        std::swap(text[left++], text[right--]);
    }
    std::cout << "Reversed text: " << text << std::endl;
    return 0;
}




#include <iostream>
#include <string>
bool isCharVowel(char character) {
    switch (tolower(character)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
int main() {
    std::string inputStr, consonantStr = "";
    std::cout << "Enter a string: ";
    getline(std::cin, inputStr);
    for (char ch : inputStr) {
        if (!isCharVowel(ch)) {
            consonantStr += ch;
        }
    }
    std::cout << "String after removing vowels: " << consonantStr << std::endl;
    return 0;
}




#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    int count;
    std::cout << "How many strings to sort? ";
    std::cin >> count;
    std::cin.ignore(); 
    std::vector<std::string> stringList(count);
    std::cout << "Enter the " << count << " strings:\n";
    for (int i = 0; i < count; i++) {
        getline(std::cin, stringList[i]);
    }
    std::sort(stringList.begin(), stringList.end());
    std::cout << "\nSorted strings:\n";
    for (int i = 0; i < count; i++) {
        std::cout << stringList[i] << std::endl;
    }
    return 0;
}




#include <iostream>
#include <cctype>
int main() {
    char upperChar;
    std::cout << "Enter an uppercase letter: ";
    std::cin >> upperChar;
    if(upperChar >= 'A' && upperChar <= 'Z'){
        char lowerChar = upperChar + ('a' - 'A');
        std::cout << "In lowercase: " << lowerChar << std::endl;
    } else {
        std::cout << "Not an uppercase letter." << std::endl;
    }
    return 0;
}





#include <iostream>

class DiagonalMatrix {
    int dimension;
    int *elements;
public:
    DiagonalMatrix(int size) {
        this->dimension = size;
        elements = new int[size];
    }
    void setValue(int r, int c, int val) {
        if (r == c) elements[r-1] = val;
    }
    int getValue(int r, int c) {
        if (r == c) return elements[r-1];
        else return 0;
    }
    void display() {
        for (int i=1; i<=dimension; i++) {
            for (int j=1; j<=dimension; j++) {
                if(i==j) std::cout << elements[i-1] << " ";
                else std::cout << "0 ";
            }
            std::cout << std::endl;
        }
    }
};

class LowerTriMatrix {
    int dimension;
    int *elements;
public:
    LowerTriMatrix(int size) {
        this->dimension = size;
        elements = new int[size*(size+1)/2];
    }
    void setValue(int r, int c, int val) {
        if (r >= c) elements[r*(r-1)/2 + (c-1)] = val;
    }
    int getValue(int r, int c) {
        if (r >= c) return elements[r*(r-1)/2 + (c-1)];
        else return 0;
    }
    void display() {
        for (int i=1; i<=dimension; i++) {
            for (int j=1; j<=dimension; j++) {
                std::cout << getValue(i,j) << " ";
            }
            std::cout << std::endl;
        }
    }
};  




#include <iostream>
using namespace std;

struct MatrixTerm {
    int row, col, value;
};

struct SparseRepr {
    int numRows, numCols, nonZeroCount;
    MatrixTerm terms[100];
};

void inputSparseMatrix(SparseRepr &mat) {
    cout << "Enter rows, cols, number of non-zero terms: ";
    cin >> mat.numRows >> mat.numCols >> mat.nonZeroCount;
    cout << "Enter row, col, value for each term:\n";
    for (int i = 0; i < mat.nonZeroCount; i++) {
        cin >> mat.terms[i].row >> mat.terms[i].col >> mat.terms[i].value;
    }
}

void displaySparseMatrix(SparseRepr mat) {
    cout << "Row Col Val\n";
    for (int i = 0; i < mat.nonZeroCount; i++) {
        cout << mat.terms[i].row << "   " << mat.terms[i].col << "   " << mat.terms[i].value << "\n";
    }
}

SparseRepr computeTranspose(SparseRepr mat) {
    SparseRepr t;
    t.numRows = mat.numCols;
    t.numCols = mat.numRows;
    t.nonZeroCount = mat.nonZeroCount;
    int k = 0;
    for (int c = 0; c < mat.numCols; c++) {
        for (int i = 0; i < mat.nonZeroCount; i++) {
            if (mat.terms[i].col == c) {
                t.terms[k].row = mat.terms[i].col;
                t.terms[k].col = mat.terms[i].row;
                t.terms[k].value = mat.terms[i].value;
                k++;
            }
        }
    }
    return t;
}

SparseRepr addMatrices(SparseRepr m1, SparseRepr m2) {
    SparseRepr result;
    if (m1.numRows != m2.numRows || m1.numCols != m2.numCols) {
        result.nonZeroCount = 0;
        return result;
    }
    result.numRows = m1.numRows;
    result.numCols = m1.numCols;
    int i = 0, j = 0, k = 0;
    while (i < m1.nonZeroCount && j < m2.nonZeroCount) {
        if (m1.terms[i].row == m2.terms[j].row && m1.terms[i].col == m2.terms[j].col) {
            result.terms[k].row = m1.terms[i].row;
            result.terms[k].col = m1.terms[i].col;
            result.terms[k].value = m1.terms[i].value + m2.terms[j].value;
            if (result.terms[k].value != 0) k++;
            i++; j++;
        } else if ((m1.terms[i].row < m2.terms[j].row) || (m1.terms[i].row == m2.terms[j].row && m1.terms[i].col < m2.terms[j].col)) {
            result.terms[k++] = m1.terms[i++];
        } else {
            result.terms[k++] = m2.terms[j++];
        }
    }
    while (i < m1.nonZeroCount) result.terms[k++] = m1.terms[i++];
    while (j < m2.nonZeroCount) result.terms[k++] = m2.terms[j++];
    result.nonZeroCount = k;
    return result;
}

SparseRepr multiplyMatrices(SparseRepr m1, SparseRepr m2) {
    SparseRepr prod;
    if (m1.numCols != m2.numRows) {
        prod.nonZeroCount = 0;
        return prod;
    }
    prod.numRows = m1.numRows;
    prod.numCols = m2.numCols;
    prod.nonZeroCount = 0;
    SparseRepr m2T = computeTranspose(m2);
    for (int i = 0; i < m1.numRows; i++) {
        for (int j = 0; j < m2T.numRows; j++) {
            int sum = 0;
            for (int p = 0; p < m1.nonZeroCount; p++) {
                if (m1.terms[p].row == i) {
                    for (int q = 0; q < m2T.nonZeroCount; q++) {
                        if (m2T.terms[q].row == j && m1.terms[p].col == m2T.terms[q].col) {
                            sum += m1.terms[p].value * m2T.terms[q].value;
                        }
                    }
                }
            }
            if (sum != 0) {
                prod.terms[prod.nonZeroCount].row = i;
                prod.terms[prod.nonZeroCount].col = j;
                prod.terms[prod.nonZeroCount].value = sum;
                prod.nonZeroCount++;
            }
        }
    }
    return prod;
}






#include <iostream>

int main() {
    int size;
    std::cout << "Define array size: ";
    std::cin >> size;

    int* elements = new int[size];
    std::cout << "Enter the " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> elements[i];
    }

    int inversionCount = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (elements[i] > elements[j]) {
                inversionCount++;
            }
        }
    }

    std::cout << "Total number of inversions is: " << inversionCount << std::endl;
    delete[] elements;
    return 0;
}




#include <iostream>
#include <unordered_set>

int main() {
    int arraySize;
    std::cout << "Enter the total number of elements: ";
    std::cin >> arraySize;

    int* inputArray = new int[arraySize];
    std::cout << "Enter " << arraySize << " integer elements: ";
    for (int i = 0; i < arraySize; i++) {
        std::cin >> inputArray[i];
    }

    std::unordered_set<int> uniqueElements(inputArray, inputArray + arraySize);

    std::cout << "The count of unique elements is: " << uniqueElements.size() << std::endl;

    delete[] inputArray;
    return 0;
}