# RSA Factoring Challenge :smile:

This project aims to solve the RSA Factoring Challenge, which invlolves factoring a given number into prime factors. The RSA Factoring Challenge is an important problem in cryptography and has real-world applications.

## Task 0: Factoring all the things!

The first task of the challenge is to factorize a set of numbers into a product of two smaller numbers. The program takes a file as input, where each line contains a natural number greater than 1. The program then factors each number into two smaller numbers and outputs the factorization in the format `n = p * q` for each number.


## Usage
```
$ factors <file>
```

* `<file>` : A file containing natural numbers to factor, with one number per line.

## Example

Input file (`test00`):

```
4
12
34
128
1024
4958
1718944270642558716715
9
99
999
9999
9797973
49
239809320265259
```

Output:

```
4 = 2 * 2
12 = 6 * 2
34 = 17 * 2
128 = 64 * 2
1024 = 512 * 2
4958 = 2479 * 2
1718944270642558716715 = 343788854128511743343 * 5
9 = 3 * 3
99 = 33 * 3
999 = 333 * 3
9999 = 3333 * 3
9797973 = 3265991 * 3
49 = 7 * 7
239809320265259 = 15485783 * 15485773
```

## Task 1: RSA Factoring

The second task of the challenge is to factorize a single RSA number into its prime factors. The program takes a file as input, where the first line contains the RSA number to factor. The program then factors the number into two prime number `p` and `q` and outputs the factorization in the format `n = p * q`.


## Usage

```
$ rsa <file>
```

* `<file` : A file containing the RSA number to factor. TYhe number should be the first line of the file.


## Example

Input file (`rsa-1`):

```
6
```

Output:

```
6 = 3 * 2
```

Input file (`rsa-2`):
```
77
```

Output:

```
77 = 11 * 7
```

Input file (`rsa-15`)
```
239821585064027
```

Output:
```
239821585064027 = 15486481 * 15485867
```

## Repository
The code for the RSA Factoring Challenge can be found in the RSA-Factoring-Challenge repository. The repository includes the following files:

* `factors`: The executable program to solve task 0.
* `rsa` : The executable program to solve task 1
* `README.md` : This file, providing an overview of the project and instructions.
* `tests/` : Directory containing input test files for both tasks.

Feel free to explore the repository and run the programs to solve the RSA Factoring Challenge.

## Dependencies

The program `factors` and `rsa` do not have any external dependencies. They are self-contained and can run without installing additional libraries or packages.

## Time Limit
Bpth programs have a time limit of 5 seconds. If the program hasn't finished within this time, it will be terminated.

## Contributing

If you'd like to contribute to this project, feel free to submit pull requests or open issues in the RSA-Factoring-Challenge repository.

## License
This project is licensed under the MIT License
