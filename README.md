# 🐧 Linux Command Utility Suite (C Project)

## 📌 Description

The **Linux Command Utility Suite** is a collection of custom implementations of common Linux shell commands written in C using low-level system calls.

This project demonstrates deep understanding of:

* System programming
* File handling
* Process management
* Linux kernel interfaces (`/proc`, system calls)

Each command mimics real Linux utilities like `ls`, `cp`, `rm`, `pwd`, etc., implemented from scratch.

---

## 🚀 Features

### 📂 File & Directory Operations

* `lsx` → List directory contents 
* `cdx` → Change directory 
* `pwdx` → Print working directory 

### 📄 File Management

* `catx` → Display file contents 
* `cpx` → Copy files 
* `mvx` → Move/Rename files 
* `rmx` → Delete files 
* `touchx` → Create file 

### 📊 File Information

* `statx` → Display file metadata 
* `hexdumpx` → Show file in hexadecimal format 

### 🖥️ System Information

* `unamex` → Display system info 
* `psx` → Process listing (planned / partial) 

---

## 🛠️ Technologies Used

* Language: **C**
* OS: **Linux**
* Concepts:

  * System Calls (`open`, `read`, `write`, `unlink`, `stat`, `chdir`)
  * Directory Handling (`opendir`, `readdir`)
  * Process Handling (`getpid`)
  * File Permissions & Metadata

---

## ⚙️ Project Structure

```bash id="struct1"
Linux_Command_Utility_Suite/
│── Command_ls.c
│── Command_ls2.c
│── Command_cp.c
│── Command_mv.c
│── Command_rm.c
│── Command_cat.c
│── Command_pwd.c
│── Command_cd.c
│── Command_touch.c
│── Command_stat.c
│── Command_stat2.c
│── Command_uname.c
│── Command_hexdump.c
│── Command_ps.c
│── Demo.c
│── README.md
```

---

## 🧑‍💻 Compilation & Usage

### 🔧 Compile Example

```bash id="compile1"
gcc Command_ls.c -o lsx
gcc Command_cp.c -o cpx
gcc Command_rm.c -o rmx
```

### ▶️ Run Examples

```bash id="run1"
./lsx
./pwdx
./cdx /home/user
./catx file.txt
./cpx source.txt dest.txt
./rmx file.txt
./hexdumpx file.txt
```

---

## ⚙️ How It Works

Each utility directly uses Linux system calls:

* File operations → `open()`, `read()`, `write()`
* Directory operations → `opendir()`, `readdir()`
* File metadata → `stat()`
* Process interaction → `/proc` filesystem
* System info → `uname()`

Example:

* `rmx` uses `unlink()` to delete files 
* `cdx` uses `chdir()` to change directory 
* `statx` extracts metadata like inode and permissions 

---

## 📂 Output Examples

### lsx

```
file1.txt
file2.c
folder/
```

### pwdx

```
/home/user/projects
```

### statx

```
File Name : file.txt
File Size : 1024
Inode number : 123456
File Permission : -rw-r--r--
```

---

## 🔒 Requirements

* Linux OS (Ubuntu recommended)
* GCC Compiler
* Basic knowledge of terminal commands

---

## 📈 Future Improvements

* Complete `psx` using `/proc`
* Add piping support (like shell)
* Combine all commands into a **custom shell**
* Add command flags (`-l`, `-a`, etc.)
* Error handling improvements

---

## 💡 Learning Outcomes

* Deep understanding of Linux internals
* Hands-on experience with system calls
* Practical implementation of OS concepts
* Foundation for building custom shells

---

## 👤 Author

**Kartik Ganesh Jare**

---

## ⭐ Why This Project Matters

This project replicates **core Linux utilities from scratch**, making it highly valuable for:

* System Programming roles
* Linux/Unix-based development
* OS and Kernel-level understanding
