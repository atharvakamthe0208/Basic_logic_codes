
class Product:
    def __init__(self, pno, pname, price, quantity):
        self.pno = pno
        self.pname = pname
        self.price = price
        self.quantity = quantity

    @property
    def pno(self):
        return self._pno

    @pno.setter
    def pno(self, pno):
        self._pno = pno

    @property
    def pname(self):
        return self._pname

    @pname.setter
    def pname(self, pname):
        self._pname = pname

    @property
    def price(self):
        return self._price

    @price.setter
    def price(self, price):
        self._price = price

    @property
    def quantity(self):
        return self._quantity

    @quantity.setter
    def quantity(self, quantity):
        self._quantity = quantity
