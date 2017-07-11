import mnist_loader
from tests import Network

net = Network([784, 30, 10])
tr, va, te = mnist_loader.load_data_wrapper()

net.SGD(tr, 10, 30, 3.0, te)
