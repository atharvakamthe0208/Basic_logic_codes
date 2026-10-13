class Product:

    def __init__(self, product_id, name, category, price, quantity):
        self.product_id = product_id
        self.name = name
        self.category = category
        self.price = price
        self.quantity = quantity


    # Product ID
    @property
    def product_id(self):
        return self.__product_id

    @product_id.setter
    def product_id(self, product_id):
        self.__product_id = product_id

    # Product name
    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        self.__name = name

    # Product category
    @property
    def category(self):
        return self.__category

    @category.setter
    def category(self, category):
        self.__category = category

    # Product price
    @property
    def price(self):
        return self.__price

    @price.setter
    def price(self, price):
        self.__price = price

    # Product quantity
    @property
    def quantity(self):
        return self.__quantity

    @quantity.setter
    def quantity(self, quantity):
        self.__quantity = quantity