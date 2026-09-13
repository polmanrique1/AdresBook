# CRUD in C 

A simple address book application made in console with data persistence.
 
## Description
 
This project is a simple CRUD written in C where the data is saved in a `.txt` file.
 
It was made to practice and get familiarized with C syntax and its own tools, such as pointers and structs.
 
## Compilation
 
To compile the project you need a C compiler, such as `gcc`:
 
```bash
gcc -o m main.c
```
 
>  **Important:** if you use a compiler other than `gcc`, the compile command might be different from the one indicated above.
 
## Usage
 
Once compiled, you can use the following commands:
 
| Action | Command |
|---|---|
| Add a contact | `./m add {phonenumber} {name}` |
| List contacts | `./m list` |
| Get by phone number | `./m get {phone}` |
| Get by contact name | `./m getn {name}` |
| Delete a contact | `./m r {name}` |
 
### Examples
 
```bash
./m add 555123456 "John Doe"
./m list
./m get 555123456
./m getn "John Doe"
./m r "John Doe"
```
 
## Data persistence
 
Contacts are stored in a plain text file, which keeps the information available across program executions.
 
## Project goal
 
This project has an educational purpose: to practice fundamental C concepts such as:
 
- Pointer handling
- Use of `structs`
- File handling (read/write)
- Command-line argument parsing
 
