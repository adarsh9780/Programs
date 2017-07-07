function [theta, J_history] = gradientDescent(X, y, theta, alpha, num_iters)
%   GRADIENTDESCENT Performs gradient descent to learn theta
%   theta = GRADIENTDESCENT(X, y, theta, alpha, num_iters) updates theta by 
%   taking num_iters gradient steps with learning rate alpha

% Initialize some useful values
J_history = zeros(num_iters, 1);

%data = load('ex1data1.txt');

%x = data(:, 1);
%y = data(:, 2);
m = length(y);  % number of training examples
%X = [ones(m, 1) x];
n = 1;% number of features

for iter = 1:num_iters

    % ====================== YOUR CODE HERE ======================
    % Instructions: Perform a single gradient step on the parameter vector
    %               theta. 
    %
    % Hint: While debugging, it can be useful to print out the values
    %       of the cost function (computeCost) and gradient here.
    %
        %for count1 = 1:n+1
          %  theta(count1) = theta(count1) - (alpha/m)*( sum( (X * theta - y).*X(:, count1) ) );
        %end;
    % ============================================================

    % Save the cost J in every iteration    
    J_history(iter) = computeCost(X, y, theta);

end

end
