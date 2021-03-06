from statistics import mean
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import style

style.use('fivethirtyeight')

xs = np.array([1, 2, 3, 4, 5, 6], dtype=np.float64)
ys = np.array([5, 4, 6, 5, 6, 7], dtype=np.float64)


def best_fit_slope_and_intercept(xs, ys):
    m = (((mean(xs) * mean(ys)) - mean(xs*ys)) /
         ((mean(xs)*mean(xs)) - mean(xs*xs)))
    b = mean(ys) - m*mean(xs)
    return m, b


def square_error(ys_orig, ys_line):
    return sum((ys_line-ys_orig) ** 2)


def coefficent_of_determination(ys_orig, ys_line):
    y_mean_line = [mean(ys_orig) for y in ys_orig]
    square_error_regr = square_error(ys_orig, ys_line)
    square_error_y_mean = square_error(ys_orig, y_mean_line)
    return 1-(square_error_regr / square_error_y_mean)


m, b = best_fit_slope_and_intercept(xs, ys)

regression_line = [(m*x)+b for x in xs]
print(regression_line)