# ASCII Art Converter (C++)

## Overview

This project converts an input image into **ASCII art** using C++.
The program reads pixel brightness values from an image and maps them to a set of ASCII characters to generate a text-based representation of the image.

ASCII art is a technique where images are represented using characters such as `@`, `#`, `%`, `*`, `.` etc.

---

## Features

* Converts images into ASCII character representation
* Uses grayscale intensity mapping
* Adjustable scaling for better output resolution
* Simple terminal-based output
* Implemented entirely in **C++**

---

## How It Works

1. The program reads an image file.
2. Each pixel’s brightness value is calculated.
3. Brightness values are mapped to ASCII characters based on intensity.
4. The characters are printed row by row to create the ASCII image.

Example mapping:

Dark pixels → `@` `#`
Medium pixels → `*` `+`
Light pixels → `.` ` `

---

## Technologies Used

* **C++**
* Basic image processing concepts
* ASCII character mapping

---

## How to Run

Compile the program:

```
g++ main.cpp -o ascii
```

Run the program:

```
./ascii
```

---

## Example Output

Example ASCII output:

```
@@@@@@@%%%%%%##
@@@@@@%%%%%%###
@@@@@%%%%%###**
@@@@%%%%%###***
@@@%%%%###***++
```

---

## Project Structure

```
ascii-art-converter
│
├── main.cpp
├── input.jpg
└── README.md
```

---

## Learning Outcomes

Through this project I learned:

* Image brightness processing
* Mapping data to ASCII characters
* Working with C++ file handling
* Building a mini project from scratch

---

## Author

Prem Patel
