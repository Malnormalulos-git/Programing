#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cout << "Input string: ";
    cin >> N;
    cout << "Input collons: ";
    cin >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j<M; j++)
        {
            if(i == 0 || i == N-1)
            {
                cout << " * ";
            }
            else
            {
                if(j == 0 || j == M - 1)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
        }
        cout << endl;
    } 
    return 0;
}
