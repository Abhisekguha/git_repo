import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns

# Line plot:
data = {'Year': [2010, 2011, 2012, 2013, 2014],
        'Sales': [100, 120, 90, 110, 130]}
df = pd.DataFrame(data)
df.plot(x='Year', y='Sales', kind='line')
plt.xlabel('Year')
plt.ylabel('Sales')
plt.title('Line Plot')
plt.show()

# Bar plot:
data = {'Category': ['A', 'B', 'C', 'D'], 'Value': [50, 75, 60, 90]}
df = pd.DataFrame(data)
df.plot(x='Category', y='Value', kind='bar')
plt.xlabel('Category')
plt.ylabel('Value')
plt.title('Bar Plot')
plt.show()

# Histogram:
data = {'Values': [30, 45, 60, 75, 90, 100, 120, 135, 150, 180]}
df = pd.DataFrame(data)
df.plot(kind='hist', bins=5, rwidth=0.8, title='Distribution of Values')
plt.xlabel('Values')
plt.ylabel('Frequency')
plt.show()

# Density plot:
np.random.seed(0)
sample_data = np.random.normal(loc=0, scale=1, size=1000)
sns.histplot(sample_data, kde=True, color="green")
plt.xlabel("Value")
plt.ylabel("Density")
plt.title("Density Plot of Sample Data")
plt.show()

# Scatter plot:
np.random.seed(0)
x = np.random.rand(50)
y = 2 * x + 1 + np.random.randn(50)
plt.scatter(x, y, color='blue', label='Data Points')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Scatter Plot of Sample Data')
plt.legend()
plt.grid(True)
plt.show()
