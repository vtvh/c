# in ra cai nay
# *             *
# * *           *
# *   *         *
# *     *       *
# *       *     *
# *         *   *
# *           * *
# *             *


n=int(input('Entert the height:'))
for i in range(n):
  for j in range(n):
    if j==0 or i==j or j==n-1:
      print('*',end=' ')
    else:
      print(' ',end=' ')
  print()

n=int(input('Entert the height:'))
i=0
while i<n:
  j=0
  while j<n:
    if j==0 or i==j or j==n-1:
      print('*', end=' ')
    else:
      print(' ',end=' ')
    j+=1
  i+=1
  print()

