import mnist_loader
from time import clock
from tests import Network

net = Network([784, 30, 10])
tr, va, te = mnist_loader.load_data_wrapper()

t0 = clock()
net.SGD(tr, 10, 30, 3.0, te)
t1 = clock()-t0

print("Benchmark : ", t1)