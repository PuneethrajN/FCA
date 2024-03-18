#include<iostream>
#include<cmath>
using namespace std;

struct Result
{
    Result() : output1() {}
    double output1[2];
};

Result Quadratic(double input1, double input2, double input3)
{
    Result r;
    double dis = input2 * input2 - 4 * input1 * input3;

    if (dis > 0)
    {
        // Two real and distinct roots
        r.output1[0] = (-input2 + sqrt(dis)) / (2 * input1);
        r.output1[1] = (-input2 - sqrt(dis)) / (2 * input1);
    }
    else if (dis == 0)
    {
        // One real root (double root)
        r.output1[0] = -input2 / (2 * input1);
        r.output1[1] = -input2 / (2 * input1);
    }
    else
    {
        // Complex roots (store real and imaginary parts separately)
        r.output1[0] = -input2 / (2 * input1);
        r.output1[1] = sqrt(-dis) / (2 * input1);
    }
    return r;
}

int main()
{
    double input1, input2, input3;
    cout << "Enter coefficients (input1, input2, input3) of the quadratic equation: ";
    cin >> input1 >> input2 >> input3;

    Result result = Quadratic(input1, input2, input3);

    cout << "Root 1: " << result.output1[0] << endl;
    cout << "Root 2: " << result.output1[1] << endl;

    return 0;
}
