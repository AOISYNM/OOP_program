#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10];
    int row, col;
public:
    void read()
    {
        cout << "Enter row and col: ";
        cin >> row >> col;
        cout << "Enter elements:\n";
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                cin >> a[i][j];
    }
    void show()
    {
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        temp.row = row;
        temp.col = col;
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }
    Matrix operator*(Matrix m)
    {
        Matrix temp;
        temp.row = row;
        temp.col = m.col;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < m.col; j++)
            {
                temp.a[i][j] = 0;
                for(int k = 0; k < col; k++)
                    temp.a[i][j] += a[i][k] * m.a[k][j];
            }
        }
        return temp;
    }
};

int main()
{
	cout<<"Lab no : 14 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Matrix m1, m2, m3, m4;

    cout << "Matrix 1:\n";
    m1.read();
    cout << "Matrix 2:\n";
    m2.read();

    m3 = m1 + m2;
    m4 = m1 * m2;

    cout << "Sum:\n";
    m3.show();
    cout << "Product:\n";
    m4.show();

    return 0;
}
