import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import openpyxl
from math import sqrt
from math import pi

# коэффицент наклона по мнк
def coef (k, v):
    sumv = 0
    sumn = 0
    sumvn = 0
    sumn_sq =0
    rng = len(v)

    for i in range (rng):
        sumvn += v[i] * k[i]
        sumn += k[i]
        sumv += v[i]
        sumn_sq+= int(k[i] ** 2)

    k = (rng * sumvn - sumn * sumv ) / (rng * sumn_sq - (sumn)**2)
    return k
# погрешность по мнк
def pog_mnk(x, y, k):
    summ_sq_x = 0
    summ_sq_y = 0
    for i in range(len(x)):
        summ_sq_x += x[i] ** 2
        summ_sq_y += y[i] ** 2
    coef1 = 1 / (len(x) -1 )
    coef2 = np.mean(summ_sq_y) / np.mean((summ_sq_x)) - k ** 2
    return(sqrt(coef1 * coef2))

# функция для создания массива теоретических значений периода УГЛЫ - В РАДИАНАХ
def t_teor(t0, f):
    t = []
    for i in range(len(f)):
        t.append(t0 * (1 + 0.25 * (np.sin(f[i] / 2)**2) + 9 / 64 * (np.sin(f[i] / 2)) ** 4  ) )
    return t






# массивы периодов, снятых датчиком
exp_1_data = pd.read_excel('data\\exp_1_data.xlsx')
exp_1_data_array = exp_1_data['texp1'] / 1193180# периоды
exp_1_ten_array = exp_1_data['ten']/ 1193180 # затенения

exp_2_data = pd.read_excel('data\\exp_2_data.xlsx')
exp_2_data_array = exp_2_data['texp2']/ 1193180 # периоды
exp_2_ten_array = exp_2_data['ten']/ 1193180 # затенения

exp_3_data = pd.read_excel('data\\exp_3_data.xlsx')
exp_3_data_array = exp_3_data['texp3'] / 1193180 # периоды
exp_3_ten_array = exp_3_data['ten'] / 1193180# затенения

# используемые переменные
# глобальные
r = 0.3 # радиус маятника
df = 5.22 * 10 **(-3) # угловой размер чпицы

# первый эксперимент
l1_1 = 0.043 # от подвеса до верхнего груза
l2_1 = 0.253 # от подвеса до нижнего груза
t0_1 = 1.33 # период свободных колебаний
l_cm_1 = (l1_1 + l2_1) / 2 - l1_1# расстояние от подвеса до центра масс


# второй эксперимент
l1_2 = 0.043 # от подвеса до верхнего груза
l2_2 = 0.188 # от подвеса до нижнего груза
t0_2 = 1.34 # период свободных колебаний
l_cm_2 = (l1_2 + l2_2) / 2 - l1_2# расстояние от подвеса до центра масс


# третий эксперимент
l1_3 = 0.043 # от подвеса до верхнего груза
l2_3 = 0.167 # от подвеса до нижнего груза
t0_3 = 1.36 # период свободных колебаний
l_cm_3 = (l1_3 + l2_3) / 2 - l1_3# расстояние от подвеса до центра масс



# для графика периода о расстояния
pol_niz = np.array([0.087,
0.125,
0.14,
0.167,
0.186,
0.211,
0.234,
0.254
])

t0_ar = np.array([1.808,
1.481,
1.41,
1.356,
1.332,
1.325,
1.324,
1.33
])

# теоретические периоды

l2 = np.linspace(0.042, 0.3, 100)
x_teor_t = (0.042 + l2) / (2) - 0.042


chis = (0.042 + 2 * x_teor_t) ** 2 + 0.042 ** 2
znam = x_teor_t * 9.81

y_teor_t = []
for i in range (len(chis)):
    y_teor_t.append( 2 * pi * sqrt(chis[i] * znam[i]))

# расстояние до центра масс
ar_cm_t_r = (0.042 + pol_niz) / (2) - 0.042










# безразмерные скорости
exp_1_brv = df / exp_1_ten_array
exp_2_brv = df / exp_2_ten_array
exp_3_brv = df / exp_3_ten_array


# для каждого из экспериментов создаём массив угловых скоростей
exp_1_tngspd = (2 * pi * exp_1_brv) / (t0_1)
exp_2_tngspd = (2 * pi * exp_2_brv) / (t0_2)
exp_3_tngspd = (2 * pi * exp_3_brv) / (t0_3)



# амплитуды колебаний (в метрах)
exp_1_amp_m = ((l1_1 ** 2 + l2_1 ** 2 ) * (exp_1_tngspd)**2 )/ (4 * 9.81)
exp_2_amp_m = ((l1_2 ** 2 + l2_2 ** 2 ) * (exp_2_tngspd)**2 )/ ( 4 * 9.81)
exp_3_amp_m = ((l1_3 ** 2 + l2_3 ** 2 ) * (exp_3_tngspd)**2 )/ ( 4 * 9.81)

# амплитуды колебаний (в градусах)
exp_1_amp_deg = np.arccos((l2_1 - exp_1_amp_m)/l2_1) * 57
exp_2_amp_deg = np.arccos((l2_2 - exp_2_amp_m)/l2_2) * 57
exp_3_amp_deg = np.arccos((l2_3 - exp_3_amp_m)/l2_3) * 57
print(exp_3_amp_m)


# амплитуды колебаний (в радианах) - для теоретических значений
angls = np.linspace(1, 90, 90) / 57

# отношение периодов
dt = []
for i in range (len (exp_1_data_array) - 1):
    dt.append((exp_1_data_array[i] - exp_1_data_array[i + 1]))
dt.append(dt[len(dt) - 1])

# массив логарифмов от угла и массив для логарифмического декремента затухания
log_x_1 = np.linspace(1, len(exp_1_amp_deg), len(exp_1_amp_deg))
log_y_1 = np.log(exp_1_amp_deg)
log_x_1_c = log_x_1[len(log_x_1) // 2 :]
log_y_1_c = log_y_1[len(log_y_1) // 2 :]
x_c_1 = np.linspace(1, 200, 200)


log_x_2 = np.linspace(1, len(exp_2_amp_deg), len(exp_2_amp_deg))
log_y_2 = np.log(exp_2_amp_deg)
log_x_2_c = log_x_2[len(log_x_2) // 2 :]
log_y_2_c = log_y_2[len(log_y_2) // 2 :]
x_c_2 = np.linspace(1, 700, 700)




log_x_3 = np.linspace(1, len(exp_3_amp_deg), len(exp_3_amp_deg))
log_y_3 = np.log(exp_3_amp_deg)
log_x_3_c = log_x_3[len(log_x_3) // 2 :]
log_y_3_c = log_y_3[len(log_y_3) // 2 :]
x_c_3 = np.linspace(1, 500, 500)







# расчёт коэффицента графика
print(abs(coef(log_x_1, log_y_1)), pog_mnk(log_x_1, log_y_1, len(log_x_1)))
print(abs(coef(log_x_2, log_y_2)), pog_mnk(log_x_2, log_y_2, len(log_x_2)))
print(abs(coef(log_x_3, log_y_3)), pog_mnk(log_x_3, log_y_3, len(log_x_3)))

# теоретические значени периодов
t1 = t_teor(t0_1, angls )
t2 = t_teor(t0_2, angls )
t3 = t_teor(t0_3, angls )

