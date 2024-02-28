class Solution
{
public:
    bool isPerfactSquare(int n)
    {
        int root = sqrt(n);
        if (root * root == n)
            return true;
        else
            return false;
    }
    bool judgeSquareSum(int c)
    {
        int x = 0;
        int y = c;
        while (x <= y)
        {
            if (isPerfactSquare(x) && isPerfactSquare(y))
                return true;
            else if (isPerfactSquare(y))
            {
                y = (int)sqrt(y) * (int)sqrt(y);
                x = c - y;
            }
            else
            { // x is not perfact
                x = ((int)sqrt(x) + 1 * (int)sqrt(x) + 1);
                y = c - x;
            }
        }
        return false;
    }
};