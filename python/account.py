class account:
    def __init__(self,accno,cname,accbal):
        self.accno=accno
        self.cname=cname
        self.accbal=accbal

    @property
    def accno(self,accno):
        return self._accno

    @accno.setter
    def accno(self,accno):
        self._accno=accno

    @property
    def cname(self,cname):
        return self._cname

    @cname.setter
    def cname(self,cname):
        self._cname=cname

    
