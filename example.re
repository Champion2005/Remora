print("Hello Remora")


for i=0 to 11 step 2 then
    print(i)
end



func person(name, age)
    print("Hello " + name + ", you are " + age + " years old")
end 

let names = ["Person1", "Person2", "Person3"]
let ages = ["18", "19", "20"]

for i=0 to len(names) then 
    person(names/i, ages/i)
end
