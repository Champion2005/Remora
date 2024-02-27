# Remora

## About

Remora is an interpreted programming language created in Python.

## Usage

1. Clone the repo
2. Create a file with the .re extension
   * `example.re`

3. Run the `shell.py` script
4. Call `run("path/to/your_re_file")`
5. Celebrate! You just ran your first Remora program!
   
## Sample Programs

### Hello Remora
Code
```
print("Hello Remora")
```
Output
```
Hello Remora
```

### Print even numbers 1-10
Code
```
for i=0 to 11 step 2 then
    print(i)
end
```
Output
```
0
2
4
6
8
10
```

### Print out names in an array with their ages
Code
```
func person(name, age)
    print("Hello " + name + ", you are " + age + " years old")
end 

let names = ["Person1", "Person2", "Person3"]
let ages = ["18", "19", "20"]

for i=0 to len(names) then 
    person(names/i, ages/i)
end
```
Output
```
Hello Aditya, you are 18 years old
Hello Jeff, you are 19 years old
Hello Bart, you are 20 years old
```

Thanks to CodePulse on youtube, @davidcallanan on github. 
