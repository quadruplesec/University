def transposed_matrix(mat):
    res_mat = mat
    mat[0][1] = res_mat[1][0]
    mat[1][0] = res_mat[0][1]

    return mat

def is_orthogonal(mx):
    a = mx[0][0]
    b = mx[0][1]
    c = mx[1][0]
    d = mx[1][1]
    Id2 = [[1,0], [0,1]]

    return Id2 == [[a**2 + b**2 , a*c + b*d],
               [a*c + b*d   , c**2 + d**2]]





