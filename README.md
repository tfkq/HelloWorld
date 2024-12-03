# HelloWorld.java
Welcome to the Nanowar Of Steel's first GitHub project, and first ever example of a source-code song.
The aim of this project is to support and enforce "True metal programming", that basically means: "write code so badly that you can only sing it".

You can find the source-code video in the link below:
https://www.youtube.com/watch?v=yup8gIXxWDU

Some important notes:
1. Beware of Joey De Caio, if set to null It may suddenly cancel the program execution with a NullPointerException.
2. Metal variable is very important! If it is set to "false", it may trigger the Joey De Caio variable mentioned above.
3. Tizio and Foo are very close friends.
4. Pippo isn't Caio's friend, but he's been flirting with Foo.
5. In the comments "manage" should be renamed as "handle" (we all wish "manage" was the right word, but it's not).
6. The constructor argument is used to control the number of executions. However, It may be completely useless if the execution is canceled by Joey De Caio.
7. Write once, run anywhere means lityerally anywhere (e.g. Hellfest).
8. sonfRefrain() identifies itself as a void method.

Below you will find a super detailed guide to the program, of course written with ChatGPT.

---

# HelloWorldMainLauncherClass

This project contains a simple Java application that demonstrates the basic usage of loops, conditionals, and handling null-pointer exceptions. The main functionality includes printing "Hello World!" multiple times based on a user-defined parameter and intentionally introducing a bug to highlight error handling.

## Overview

The `HelloWorldMainLauncherClass` performs the following tasks:

1. **Initialization**: Accepts an integer parameter (`foo`) that controls how many times "Hello World!" will be printed.
2. **Song Refrain**: Prints "Hello World!" twice—first using a `for` loop and then using a `while` loop.
3. **Exception Handling**: Contains a method `falseMethod()` that introduces a `NullPointerException` by calling `length()` on a `null` string to simulate error handling.

## Features

- **Hello World printing**: Outputs the message "Hello World!" a number of times based on the provided parameter.
- **Loops**: Demonstrates basic usage of `for` and `while` loops in Java.
- **Exception simulation**: Introduces a `NullPointerException` for demonstration purposes.
- **Basic Java structure**: Showcases constructor usage, instance variables, and method definitions.

## Prerequisites

- Java Development Kit (JDK) 8 or higher.
- A Java IDE (like IntelliJ IDEA, Eclipse, or NetBeans) or a command-line environment to compile and run the Java program.

## Installation

To set up and run this project locally, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/helloworldmainlauncherclass.git
   ```

2. Navigate into the project directory:
   ```bash
   cd helloworldmainlauncherclass
   ```

3. Compile the Java file:
   ```bash
   javac HelloWorldMainLauncherClass.java
   ```

4. Run the program:
   ```bash
   java HelloWorldMainLauncherClass
   ```

## Usage

Once you run the program, you will see the following output:

```
Hello World Programmer Start
Hello World!
Hello World!
Hello World!
Program Finished!
Exception in thread "main" java.lang.NullPointerException: Cannot invoke "String.length()" because "joeyDeCaio" is null
    at HelloWorldMainLauncherClass.falseMethod(HelloWorldMainLauncherClass.java:35)
    at HelloWorldMainLauncherClass.main(HelloWorldMainLauncherClass.java:27)
```

### Configuration

The number of times "Hello World!" is printed can be controlled by changing the parameter passed to the constructor of `HelloWorldMainLauncherClass`. For example:

```java
HelloWorldMainLauncherClass tizio = new HelloWorldMainLauncherClass(3);
```

This will print "Hello World!" three times.

## Code Explanation

1. **Constructor**: The constructor takes an integer `foo` that determines how many times the message will be printed.
   ```java
   public HelloWorldMainLauncherClass(int foo) {
       super();
       this.foo = foo;
   }
   ```

2. **songRefrain() Method**: The method contains two loops—`for` and `while`—both of which print "Hello World!" the number of times specified by `foo`.
   ```java
   public void songRefrain() {
       for (int i = 0; i < foo; i++) {
           System.out.println("Hello World!");
       }

       int pippo = 0;
       while (pippo < foo) {
           System.out.println("Hello World!");
           pippo++;
       }
   }
   ```

3. **falseMethod() Method**: This method deliberately introduces a bug by attempting to call `length()` on a `null` string.
   ```java
   public void falseMethod() {
       boolean metal = false;
       if (metal == false) {
           String joeyDeCaio = null;
           joeyDeCaio.length();
       }
   }
   ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Contributing

Feel free to fork this repository, submit issues, or open pull requests if you'd like to improve this code. Contributions are always welcome!

---

### Notes:

- **Bug introduction**: The purpose of `falseMethod()` is to demonstrate a scenario where an exception is thrown. The `NullPointerException` is handled by the JVM, but no explicit exception handling is implemented in this case.
  
- **Extending the Program**: You can extend the program by adding more features like exception handling, more complex message outputs, or additional loops and conditionals.

---

This README should give users a good understanding of what the project does, how to set it up, and what to expect from the program's behavior.
