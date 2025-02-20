#include <iostream>
#include "String.h"

const String& CompareBySize(const String& object1, const String& object2)
{
    return object1.GetSize() >= object2.GetSize() ? object1 : object2;
}

int main()
{
    String emptyString;

    std::cout << "Empty string:\n";
    std::cout << "str = [" << emptyString.GetString() << "]\n";
    std::cout << "size = " << emptyString.GetSize() << "\n";

    String someString1{ "abccxvbxcvb" };
    std::cout << "Some string #1:\n";
    std::cout << "str = [" << someString1.GetString() << "]\n";
    std::cout << "size = " << someString1.GetSize() << "\n";

    String someString2{ "abcd" };
    std::cout << "Some string #2:\n";
    std::cout << "str = [" << someString2.GetString() << "]\n";
    std::cout << "size = " << someString2.GetSize() << "\n";

    const String& biggerString = CompareBySize(someString1, someString2);

    std::cout << "Bigger String:\n";
    std::cout << "str = [" << biggerString.GetString() << "]\n";
    std::cout << "size = " << biggerString.GetSize() << "\n";

    return 0;
}
