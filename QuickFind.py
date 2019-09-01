class UnionFind:
    id = []
    N = 0
    def __init__(self, N):
        for i in range(0, N+1):
            self.id.append(i)
            self.N = N
    def Union(self, p, q):
        pid = self.id[p]
        qid = self.id[q]
        if pid != qid:
            for i in range(0, self.N+1):
                if self.id[i] == pid:
                    self.id[i] = qid
    
    def Connected(self, p, q):
        return self.id[p] == self.id[q]

union = UnionFind(5)
union.Union(1,2)
union.Union(2,3)
union.Union(3,4)
union.Union(5,4)
print(union.Connected(5,4))
            


