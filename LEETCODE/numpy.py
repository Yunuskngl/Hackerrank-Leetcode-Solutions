import numpy as np

def solve_matrix(A,y):  # fonksiyon
    A = np.array(A)    # A ve y matrislerini numpy arrayine çevirir
    y = np.array(y)     # A ve y matrislerini numpy arrayine çevirir

    if A.shape[0] == A.shape[1]:    # A matrisinin satır ve sütun sayıları eşitse
        try:
            x = np.linalg.solve(A, y)  # A matrisinin tersini alır ve y matrisi ile çarpar
            flag = 1  # flag değişkenine 1 değerini atar
            return x, flag # x ve flag değişkenlerini döndürür
        except np.linalg.LinAlgError:  # Eğer A matrisinin tersi alınamazsa
            pass

    x, residuals, rank, s = np.linalg.lstsq(A, y, rcond=None) 


    if residuals.size == 0 and rank < A.shape[1]:
        flag = np.inf
    elif np.allclose(A @ x, y):
        flag = 1
    else:
        x = np.full(y.shape, np.nan)
        flag = 0
    return x, flag