class Product:

    def __init__(self, prodid, prodname, prodprice, prodqty):
        self.__prodid = prodid
        self.__prodname = prodname
        self.__prodprice = prodprice
        self.__prodqty = prodqty

        self.__total = self.__prodprice * self.__prodqty
        self.__cgst = self.__total * 6 / 100
        self.__sgst = self.__total * 6 / 100
        self.__finaltotal = self.__total + self.__cgst + self.__sgst

    def get_prodid(self):
        return self.__prodid

    def get_prodname(self):
        return self.__prodname

    def get_prodprice(self):
        return self.__prodprice

    def get_prodqty(self):
        return self.__prodqty

    def get_total(self):
        return self.__total

    def get_cgst(self):
        return self.__cgst

    def get_sgst(self):
        return self.__sgst

    def get_finaltotal(self):
        return self.__finaltotal

    def show(self):
        print("\n--- Product Details ---")
        print("Product ID    :", self.get_prodid())
        print("Product Name  :", self.get_prodname())
        print("Product Price :", self.get_prodprice())
        print("Product Qty   :", self.get_prodqty())
        print("Total         :", self.get_total())
        print("CGST (6%)     :", self.get_cgst())
        print("SGST (6%)     :", self.get_sgst())
        print("Final Total   :", self.get_finaltotal())



p1 = Product(101, "Laptop", 50000, 2)


p1.show()