// This is the function that will be exported
extern "C" __declspec(dllexport) int add(int a, int b)
{
    return a + b;
}

