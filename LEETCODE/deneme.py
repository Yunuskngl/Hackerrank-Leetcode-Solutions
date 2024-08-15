# UNQ_C6
def compute_gradient_reg(X, y, w, b, lambda_ = 1): 
    """
    Computes the gradient for logistic regression with regularization
 
    Args:
      X : (ndarray Shape (m,n)) data, m examples by n features
      y : (ndarray Shape (m,))  target value 
      w : (ndarray Shape (n,))  values of parameters of the model      
      b : (scalar)              value of bias parameter of the model
      lambda_ : (scalar,float)  regularization constant
    Returns
      dj_db : (scalar)             The gradient of the cost w.r.t. the parameter b. 
      dj_dw : (ndarray Shape (n,)) The gradient of the cost w.r.t. the parameters w. 

    """
    m, n = X.shape
    
    dj_db, dj_dw = compute_gradient(X, y, w, b)

    ### START CODE HERE ###     
    m = X.shape[0]
    # Compute the gradient of the cost function with regularization
    # Update the dj_db and dj_dw to include the derivative of the regularization term
    # The derivative of the regularization term is the regularization parameter lambda_ times the weights
    # The bias parameter does not have a regularization term
    # The shape of dj_dw should not change
    # The shape of dj_db should not change
    # The bias parameter does not have a regularization term
    # The shape of dj_dw should not change
    n = X.shape[1]
    lambda_ = 1
    
    dj_db = dj_db + (lambda_ * b)
    dj_dw = dj_dw + (lambda_ * w)
    
    ### END CODE HERE ###         
        
    return dj_db, dj_dw
  
expected output:
[[-0.010386028450548], [0.011409852883280], [0.0536273463274], [0.003140278267313]]
