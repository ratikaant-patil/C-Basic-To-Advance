# 🛠️ How to Install and Set Up C++ on Windows

This guide will help you install and configure C++ on Windows using **Visual Studio Code, MSYS2, and the GCC compiler (MinGW-w64)**.

Follow these steps to set up your development environment and run your first C++ program.

## Step 1: Install Visual Studio Code

Visual Studio Code (VS Code) is a lightweight code editor that we will use to write and manage C++ programs.

1. Visit the official website: https://code.visualstudio.com/
2. Download the Windows installer.
3. Run the installer and follow the installation instructions.
4. Open Visual Studio Code after installation.

## Step 2: Install the C++ Compiler (MSYS2 + GCC)

C++ requires a compiler to convert source code into an executable program.

We will use **MSYS2 with GCC (MinGW-w64)**.

### 2.1 Download and Install MSYS2

1. Visit the official website: https://www.msys2.org/
2. Download the Windows installer.
3. Run the installer.
4. Use the default installation location:

   ```text
   C:\msys64
   ```

5. Complete the installation.

### 2.2 Update MSYS2

1. Open the Windows Start Menu.
2. Search for and open **MSYS2 UCRT64**.
3. Run the following command:

   ```bash
   pacman -Syu
   ```

4. Wait for the update to complete.

**Important:** If MSYS2 asks you to close the terminal, close it, reopen MSYS2 UCRT64, and run the update command again if required.

### 2.3 Install GCC Compiler

After updating MSYS2, open MSYS2 UCRT64 and execute:

```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-gcc
```

Wait until the installation finishes.

### 2.4 Verify GCC Installation

Run the following command in MSYS2 UCRT64:

```bash
g++ --version
```

If the GCC version information appears, your compiler is installed successfully.

## Step 3: Add GCC to Windows PATH

To use the GCC compiler directly from the VS Code terminal or Windows PowerShell, you need to add its location to the Windows PATH environment variable.

Follow these steps:

1. Press the **Windows key**.
2. Search for `Edit environment variables for your account`.
3. Open the settings window.
4. Under **User variables**, select `Path`.
5. Click **Edit**.
6. Click **New**.
7. Add the following path:

   ```text
   C:\msys64\ucrt64\bin
   ```

8. Click OK to save all changes.
9. Close and reopen VS Code or your terminal.

### Verify PATH Configuration

Open PowerShell or the VS Code terminal and execute:

```bash
g++ --version
```

If the compiler version appears, GCC is successfully configured.

## Step 4: Install the C++ Extension in VS Code

VS Code extensions provide additional features for writing and managing C++ code.

1. Open Visual Studio Code.
2. Press `Ctrl + Shift + X` to open Extensions.
3. Search for `C/C++`.
4. Find the extension published by **Microsoft**.
5. Click Install.

You are now ready to write C++ programs in VS Code.

## Step 5: Create Your First C++ Project

Let's create a folder to store all your C++ practice programs.

1. Create a new folder on your Desktop.
2. Name it:

   ```text
   CPP Practice
   ```

3. Open Visual Studio Code.
4. Select **File → Open Folder**.
5. Choose your `CPP Practice` folder.
6. Create a new file inside the folder.
7. Name the file:

   ```text
   hello.cpp
   ```

### Write Your First C++ Program

Copy and paste the following code into `hello.cpp`:

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    return 0;
}
```

Save the file using `Ctrl + S`.

### Understanding the Code

- `#include <iostream>`: Includes the input/output library.
- `using namespace std;`: Allows us to use standard library features without writing `std::` every time.
- `int main()`: The main function where program execution starts.
- `cout`: Displays output on the screen.
- `endl`: Moves the cursor to the next line.
- `return 0;`: Indicates successful program execution.

## Step 6: Compile and Run Your First C++ Program

Now let's compile and execute the program using GCC.

### 6.1 Open the VS Code Terminal

1. Open your `hello.cpp` file in VS Code.
2. Select **Terminal → New Terminal**.
3. Make sure the terminal is opened inside your `CPP Practice` folder.

### 6.2 Compile the Program

Run the following command:

```bash
g++ hello.cpp -o hello
```

**What does this command do?**

- `g++`: Calls the C++ compiler.
- `hello.cpp`: Specifies the source code file.
- `-o hello`: Creates an executable file named `hello.exe` on Windows.

If there are no compilation errors, your executable file will be generated.

### 6.3 Run the Executable

Execute the following command in PowerShell:

```powershell
.\hello.exe
```

### Expected Output

```text
Hello, World!
```

<escape>🎉</escape> Congratulations! You have successfully installed C++, configured GCC, and executed your first C++ program.

## Step 7: Start Learning C++

Your development environment is ready!

Now you can start learning C++ step by step, from basic programming concepts to advanced topics.

**Recommended Learning Order:**

1. C++ Fundamentals
2. Variables and Data Types
3. Operators
4. Conditional Statements
5. Loops
6. Functions
7. Arrays and Strings
8. Pointers and References
9. Object-Oriented Programming (OOP)
10. Data Structures and Algorithms

---

## Useful Resources

- **Visual Studio Code:** https://code.visualstudio.com/
- **MSYS2:** https://www.msys2.org/
- **GCC Documentation:** https://gcc.gnu.org/
- **C++ Reference:** https://en.cppreference.com/

**Happy Learning and Happy Coding! 🚀**