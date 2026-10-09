class emp:
    def __init__(self,name,age):
        
        self.__name=name
        self.__per=age

    def __str__(self):
        return self.get_name()+" "+self.get_age()
    

    def get_name(self):
        return self.__name
    
    
    def get_age(self):
        return self.__age
    



e3=emp("Atharva",10.2)
print(e3)
