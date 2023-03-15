#include <iostream>
using namespace std;

class Matrix
{
private:
    int* data; 
    int size;
public:
 
    Matrix(int size)
    {
        this->size = size;
        this->data = new int[size];
    }

    
    Matrix(const Matrix& other)
    {
        this->size = other.size;
        this->data = new int[size];
        for (int i = 0; i < size; i++)
        {
            this->data[i] = other.data[i];
        }
    }

   
    ~Matrix()
    {
        delete[] data;
    }

  
    Matrix operator+(const Matrix& other) const
    {
       
        Matrix result(size);

       
        for (int i = 0; i < size; i++)
        {
            result.data[i] = this->data[i] + other.data[i];
        }

        
        return result;
    }

    
    int operator[](int index) const
    {
        return data[index];
    }

   
    int& operator[](int index)
    {
        return data[index];
    }

    
    friend ostream& operator<<(std::ostream& os, const Matrix& matrix);
};


    ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
    for (int i = 0; i < matrix.size; i++)
    {
        os << matrix.data[i] << " ";
    }
    return os;
}

int main()
{
    
    Matrix matrix1(4);
    matrix1[0] = 1;
    matrix1[1] = 2;
    matrix1[2] = 3;
    matrix1[3] = 4;

    Matrix matrix2(4);
    matrix2[0] = 5;
    matrix2[1] = 6;
    matrix2[2] = 7;
    matrix2[3] = 8;

    
    Matrix sum = matrix1 + matrix2;

    
    cout << "Matrix 1: " << matrix1 << std::endl;
    cout << "Matrix 2: " << matrix2 << std::endl;
    cout << "Sum: " << sum << std::endl;

    return 0;
}
