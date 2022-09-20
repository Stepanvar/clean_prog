from platform import python_build
import pandas as pd

df = pd.read_csv("sp500_companies.csv")
df1 = df.iloc[:, [3,4,6]].sort_values('Currentprice').query('Currentprice > 27')
print(df1.head(10))