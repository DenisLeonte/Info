import numpy as np
import matplotlib.pyplot as plt

input = np.linspace(-10,10,100)

def sigmoid(x) :
    val = 1/(1+np.exp(-x))

output = sigmoid(input)

plt.plot(input.output)
plt.xlabel("Input")
plt.xlabel("Output")
plt.title("Sigmoid function")