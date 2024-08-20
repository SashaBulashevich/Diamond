#include <iostream>

/*                                                v
                                                  e
height == 5; ->                                   r
        *       0 1 * 3 4                         t
       ***      0 * * * 4                         i
      *****     * * * * *                         c
       ***      0 * * * 4                         a
        *       0 1 * 3 4       h o r i z o n t a l
*/

int main ()
{
    const int height = 5;
    const int centerOfRhombus = height / 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i <= centerOfRhombus)    // top of the diamond
            {
                if (j >= centerOfRhombus - i && j <= centerOfRhombus + i)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            else                         // bottom of the diamond
            {
                if (j <= height - i + centerOfRhombus - 1 && j >= i - height + centerOfRhombus + 1)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    

    return 0;
}