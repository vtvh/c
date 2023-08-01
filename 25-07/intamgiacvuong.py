# in ra cai nay
# height: 8
# *
# * *
# *   *
# *     *
# *       *
# *         *
# *           *
# * * * * * * * *


n=int(input('height: '))
for i in range(n):
  for j in range(n):
    if j==0 or i==j or i==n-1:
      print('*',end=' ')
    else:
      print(' ',end=' ')
  print()

