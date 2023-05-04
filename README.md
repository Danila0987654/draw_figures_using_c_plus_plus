
# Draw Figures Using C++ 
Create a program which will draw figures without using Qt library.

It's a project for checking my skills from a company.



## Table of Contents
- [Run Locally](#run-locally)
- [Additional Information](#additional-information)



## Run Locally
Clone the project

```bash
git clone https://github.com/Danila0987654/draw_figures_using_c_plus_plus.git
```

Go to the project directory

```bash
cd draw_figures_using_c_plus_plus
```

Compile code

```bash
g++ -o drow_figure.exe .\main.cpp
```

Run project:

```bash
.\drow_figure.exe operation_name first_size second_size
```


## Additional Information
You are able to write in operation_name rectangle or circle. If you make an error, then it will take default
value (rectangle). If you use a circle as operation_name, then second size isn't required.

For rectangle, you are able to use only first_size, then second_size will be the same as the first_size.
