import os

os.system("g++ -std=c++11 -Wall tester.cpp the1.cpp -o the1.out")

total_cases = 315
passed_cases = 0

for i in range(1, total_cases + 1):
    os.system(f"./the1.out < test_cases/input{i}.txt > output.txt")

    with open("output.txt", "r") as f:
        output = f.read()

    with open(f"test_cases/output{i}.txt", "r") as f:
        expected_output = f.read()
    
    if output == expected_output:
        print(f"Test case {i}: passed")
        passed_cases += 1
    else:
        print(f"Test case {i}: failed")
        print("Expected output:")
        print(expected_output)
        print("Actual output:")
        print(output)

os.system("rm the1.out output.txt")

print(f"{passed_cases} out of {total_cases} test cases passed.")