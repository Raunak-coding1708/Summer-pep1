class Solution {
public:
    int reverseBits(int n)
{
    unsigned int num = (unsigned int)n;
    unsigned int rev = 0;

    for (int i = 0; i < 32; i++)
    {
        rev = rev * 2 + (num % 2);
        num = num / 2;
    }

    return (int)rev;
}
};