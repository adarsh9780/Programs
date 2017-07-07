function J = computeCost(X, y, theta)
%COMPUTECOST Compute cost for linear regression
%   J = COMPUTECOST(X, y, theta) computes the cost of using theta as the
%   parameter for linear regression to fit the data points in X and y

% Initialize some useful values

m = length(y);

hypo = X * theta;
squared_error = [( hypo - y ) .^ 2];

j = 0;

for count = 1:m
    j = j + squared_error(count);
end;

% You need to return the following variables correctly 
J = 0;

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta
%               You should set J to the cost.

J = j/(2 * m);





% =========================================================================

end
