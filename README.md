## Exercise: Fraction (20 Points)

The objective of this project is to learn about creating classes by declaring
and defining them properly using C++ syntax and the concept of separate compilation.

The first thing you will need to do is fork and clone this assignment
from GitHub. Follow the instructions
[here](https://github.com/sbcc-cs140-fall2018/Course-Information/wiki)
to get started.

Be sure that you fork the project first and use the URL from
the forked project when you clone it in CLion.

### Requirements of this project

This project is based on the programming assignment 5 from Chapter 6 on page 272 of _Absolute C++_(5th Edition). In 
it you will create a class called Fraction (in the namespace `edu::sbcc::cs140`). This class
will hold the numerator and denominator is lowest terms. For example if the 
constructor is passed 20 and 60, then the numerator and denominator member values
should be 1 and 3 respectively. You can reduce them by finding their [GCD](https://en.wikipedia.org/wiki/Greatest_common_divisor) (greatest common devisor) using
any [algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm) you wish to implement.

This class has one constructors which takes the numerator and denominator, respectively, as
`uint64_t`. The numerator and denominator should then be reduced to least terms and stored in member
variables so that they might be returned via getter methods. 

In addition to the constructor, the Fraction class should also include following six public methods methods:
 
 | Method name     | Return type | Input parameters | Description                                   |
 |-----------------|-------------|------------------|-----------------------------------------------|
 |`getRealValue`   | `double`    | `void`           | Returns the real value of the fraction        |
 |`getDenominator` | `int64_t`   | `void`           | Returns the denominator, a positive integer   |
 |`setDenominator` | `void`      | `int64_t`        | Sets the denominator to a positive integer    |
 |`getNumerator`   | `uint64_t`  | `void`           | Returns the numerator, a signed integer       |
 |`setNumerator`   | `void`      | `uint64_t`       | Sets the numerator to a positive integer      |
 |`output`         | `void`      | `void`           | Outputs the fraction, in reduced form `N / D` |
  
The `output` method should output the numerator and denominator in the form `N / D`. For example, if the numerator
is 1 and the numerator it 2, output should print `1 / 2` to the console. Notice the space between the numbers and
`/` symbol. That is required. In addition, there are three special cases that you need to handle. If the denominator
is 0, then the output should be 'INF' for _infinite_. In the case where both the numerator and denominator are 0, it
should output exactly 'NAN' for _not a number_. Finally, if the numerator is 0, the output should be just `0`, not
`0 / 1`, or any other denominator.

### `const` Correctness

In C++, the concept of `const`-correctness is important. This means that all functions that do not change the state of
the data members shoud be marked as const at the end of the function signature, in both the declaration and definition.
For example, the setter and getter for the denominator should be declared as:

```cpp
int64_t getDenominator() const;
void setDenominator(int64_t d);
```

Notice that the `getDenominator` method is marked with the `const` keyword. This means that none of the data members
will be modified in this method, or any methods it calls. The same is not true for the `setDenominator` method since
it's entire function is to change the value of the denominator data member.

Remember to properly code the definition as well. For example, the `getDenominator` and `setDenominator` methods
should look like the following:

```cpp
int64_t Fraction::getDenominator() const {
  // Code goes here
}

void Fraction::setDenominator(int64_t d) {
  // Code goes here
}
```

Notice that the `getDenominator` method is marked with `const`, while the `setDenominator` method is not.

For more information on `const`-correctness see the book and this [article](https://www.cprogramming.com/tutorial/const_correctness.html).

### Writing the code for this Project

There are only three requirements for creating the code for this project correctly. One,
be sure that you create a class named `Fraction` in the namespace `edu::sbcc::cs140` with
the give interface from above. Two, you can put your implementation in a file with the 
name of your choice as long as it uses the `.cc` extension, and is in the `src` directory.
Three, you can put you class definition in a file called, exactly, `fraction.h`, in the `include` directory.

#### All files must have the header comment

Be sure to add the proper header comment to each `.cc` and `.h` file you add to this project.

### Running the code for this project

Running this code should be straightforward. In the drop-down 
menu in the upper right-hand corner you should see a *Run
Configuration* called `Fraction | Debug`. Make sure this 
configuration is selected and press the play button next to it.
In the **Run** view below the code you should see the output 
of running the program. It should look something like this:

```bash
45 / 32
Process finished with exit code 0
```
Success! Now you can move on to testing your code.

### Testing the code for this project

Testing the code for this project is similar to running your code
as outlined above. In the drop-down menu in the upper right-hand
corner select the configuration `Fraction_Gtest` and press the
play button next to it. In the **Run** view below the code you should
see the output of running these tests. It should look something
like this:

```bash
Running main() from gtest_main.cc
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from FractionTest
[ RUN      ] FractionTest.Basic
[       OK ] FractionTest.Basic (0 ms)
[ RUN      ] FractionTest.TestZeroDenominator
[       OK ] FractionTest.TestZeroDenominator (1 ms)

Your unit test score is 20 out of 20
The assignment is worth a total of 25 where the remaining points
comes from grading related to documentation, algorithms, and other
criteria.

[----------] 2 tests from FractionTest (1 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (2 ms total)
[  PASSED  ] 2 tests.

Process finished with exit code 0
```

You should also see your score for this
assignment minus code styling points which I will add later.

### Submitting the code for this project

First, right click on the project name, then select `Git -> Commit Directory...`. 
Make sure only the files you want to push are selected, `main.cc` `fraction.cc` (or whatever you called it) and `fraction.h`.
Then uncheck `Perform code analysis` and `Check TODO`. It's OK to leave them checked,
but committing will take longer. Leave `Run git hooks` checked. Put a message in `Commit Message`
and then press the **Commit** button. If anything goes wrong check the _Version Control_ view
in the lower left corner and select the _Console_ tab.
 
Finally, right click on the project name,
then select `Git -> Repository -> Push...`. Follow the onscreen directions
and press **OK**. This step will run the tests again, check that everything is OK
and then submit them to the cloud to have the tests run for grading.

If you do not understand these directions, or wish to do them on the command
line rather than in CLion, then read these [directions](https://github.com/sbcc-cs140-fall2018/Course-Information/wiki/How-to-Turn-In-Every-Project).
