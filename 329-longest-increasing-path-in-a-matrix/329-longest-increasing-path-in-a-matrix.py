class Solution(object):
    def longestIncreasingPath(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: int
        """
        
        if not matrix[0] or not matrix:
            return 0
        mp=0
        m,n = len(matrix),len(matrix[0])
        text = [[-1]*n for _ in range(m)]
        direction=[(1,0),(-1,0),(0,-1),(0,1)]
        for i in range(m):
            for j in range(n):
                path = self.DFS(matrix,text,direction,i,j,m,n)
                mp = max(path, mp)
        return mp

    def DFS(self,matrix,text,direction,i,j,m,n):
        if text[i][j]!=-1:
            return text[i][j]
        mp=1
        for d in direction:
            
            x,y=i+d[0],j+d[1]
            if x < 0 or x >= m or y <0 or y>=n or matrix[i][j]>=matrix[x][y]:
                continue
            path = 1 + self.DFS(matrix,text,direction,x,y,m,n)
            mp = max(path, mp)
            
        text[i][j]=mp
        return text[i][j]
