n_row=8
n_col=10
row=0
col=0
row_cont=0
col_cont=0
correctas=['D','B','D','C','C','D','A','E','A','D']
matrix=[
    ['A','B','A','C','C','D','E','E','A','D'],
    ['D','B','A','B','C','A','E','E','A','D'],
    ['E','D','D','A','C','B','E','E','A','D'],
    ['C','B','A','E','D','C','E','E','A','D'],
    ['A','B','D','C','C','D','E','E','A','D'],
    ['B','B','E','C','C','D','E','E','A','D'],
    ['B','B','A','C','C','D','E','E','A','D'],
    ['E','B','E','C','C','D','E','E','A','D']]
acc=0
for row_cont in range(n_row):
    count=0
    for col_cont in range(n_col):
        if (correctas[col_cont]) == (matrix[row_cont][col_cont]):
            count+=1
    acc+=count
    print(f"Student {row_cont} = {count}")
print(acc)