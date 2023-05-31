#include <iostream>
using namespace std;
class arrayFunction
{
private:
    int size;
    int *arr;

public:
    arrayFunction()
    {
        size = 0;
        arr = new int[size];
    }
    ~arrayFunction()
    {
        delete[] arr;
    }

    void create()
    {

        cout << "Enter The Number Of Elements In The Array " << endl;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the Value of " << i << " element of Array" << endl;
            cin >> arr[i];
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Array[" << i << "] = " << arr[i] << endl;
        }
    }

    void insert()
    {
        int tempElem = 0;
        int pos = 0;
        cout << "Enter The Position At Which The Element Is To Be Inserted" << endl;
        cin >> pos;
        cout << "Enter the Element to be inserted" << endl;

        cin >> tempElem;
        if (pos < 0 || pos > size - 1)
        {
            cout << "Invalid Position" << endl;
        }
        else
        {
            int *newArr = new int[size + 1];
            for (int i = 0; i < size + 1; i++)
            {
                if (i < pos)
                {
                    newArr[i] = arr[i];
                }
                if (i > pos)
                {
                    newArr[i] = arr[i - 1];
                }
            }

            newArr[pos] = tempElem;
            size++;
            delete[] arr;
            arr = newArr;
        }
    }

    void del()
    {

        int pos = 0;

        cout << "Enter The Position At Which The Element Is To Be Deleted" << endl;
        cin >> pos;
        if (pos < 0 || pos > size - 1)
        {
            cout << "Invalid Position" << endl;
        }
        else
        {
            int *newArr = new int[size - 1];
            for (int i = pos; i < size - 1; i++)
            {
                newArr[i] = arr[i + 1];
            }
            size--;
            delete[] arr;

            arr = newArr;
        }
    }
};

int main()
{
    int key = 0;
    arrayFunction obj;

    do
    {
        cout << "Welcome To Array Modification" << endl;
        cout << "Choose The Correct Option To Perform The Task" << endl;
        cout << "1 \t Create An Array" << endl;
        cout << "2 \t Display The Array" << endl;
        cout << "3 \t Insert An Element" << endl;
        cout << "4 \t Delete An Element" << endl;
        cout << "5 \t Exit The Program" << endl;
        cin >> key;

        switch (key)
        {
        case 1:
            obj.create();

            break;
        case 2:
            obj.display();

            break;
        case 3:
            obj.insert();

            break;
        case 4:
            obj.del();

            break;
        case 5:
            return 0;
        }

    } while (key != 5);
}