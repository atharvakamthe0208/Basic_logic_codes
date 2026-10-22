class Account:

    def __init__(self,accno,cname,accbal):
        self.accno=accno
        self.cname=cname
        self.accbal=accbal

@property
def accno(self):
    return self._accno


@accno.setter
def accno(self,accno):
    self._accno=accno

#cname

@property
def cname(self):
    return self._cname

@cname.setter
def cname(self,cname):
    self._cname=cname


#accbal

@property
def accbal(self):
    return self._accbal

@accbal.setter
def accbal(self,accbal):
    self._accbal=accbal
