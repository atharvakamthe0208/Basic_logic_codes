""" dictionary """

car={
        "Maruti":1000,
        "Toyota":5000,
        "BMW":2000
};

print(car)

for i in car:
    print(i ,"\t:",car.get(i))


# #function 
# print(len(car),min(car),max(car))
# print(sorted(car))
# print(sorted(car,reverse=True))

# #methods

# car.update({"BMW":1000})
# car.update({'xuv':200})
# print(car)

#remove :  
# car.pop('Maruti')#it removes the specific key value pair 
# print(car)
# car.popitem()#it removes the last element in the dictionary 
# print(car)
# car.clear()#it completely removes all the element from the dictonary

# print(car)

#All keys 
print(car.keys())#it returns all the key from the dictionary 
print(car.values())#it returns all the values from the dictionary 
print(car.items())#it returns both together 


for keys in car:
    print(keys)

tot=0
for v in car.values():
    print(v)
    

print("to print both keys and pairs -1st way ")
for kv in car.items():
    print(kv[0],kv[1])

print("to print both keys and pairs -2nd way") 
for k,v in car.items():
    print(k,v)

tot=0
for v in car.values():
    
    tot+=v

print("Total Amount :",tot)

max=0
maxcar=0
for i in car.items():
    
    if i[1]>=max:
        max=i[1]
        maxcar=i[0]

print("expensive car :",maxcar," :",max)

print("==================================================")

food={
    "veg":
    {
        "Masala papad":100,
        "abc":200,
        "xyz":300

    },
    "Non-veg":
    {
        "n1":1000,
        "n2":2000
    }
};

for category,item in food.items():
    print(category)
    for item,price in item.items():
        print(item,"=",price)
        
