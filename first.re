func person(name, age)
    print("Hello " + name)
    print("You are " + age + " years old")
end 

let names = ["Aditya", "Jeff", "Bart"]
let ages = ["18", "19", "20"]

for i=0 to len(names) then 
    person(names/i, ages/i)
end