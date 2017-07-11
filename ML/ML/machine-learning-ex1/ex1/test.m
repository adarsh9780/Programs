function theta = test()
    data = load('ex1data1.txt');
    x = data(:, 1);
    y = data(:, 2);
    m = length(y);
    X = [ones(m, 1) x];
    theta = zeros(2, 1);
    
    theta = (pinv( X' * X) * X') * y;
    disp(theta);
end;
