from main import exp_1_amp_deg, exp_1_data_array, dt, log_x_1, log_y_1, log_x_2, log_y_2,log_x_3, log_y_3
from main import exp_2_amp_deg, exp_2_data_array, exp_3_amp_deg, exp_3_data_array, t1, t2, t3, angls
from main import pol_niz, t0_ar
from main import t0_1, ar_cm_t_r, x_teor_t, y_teor_t
from main import log_x_1_c, log_y_1_c, x_c_1, log_x_2_c, log_y_2_c
from main import x_c_2, x_c_3, log_x_3_c, log_y_3_c
import matplotlib.pyplot as plt
from matplotlib import rc

import numpy as np

# аппроксимации
f1 = np.polyfit(log_x_1_c, log_y_1_c, 1)
ap_1 = np.poly1d(f1)

f2 = np.polyfit(log_x_2_c, log_y_2_c, 1)
ap_2 = np.poly1d(f2)

f3 = np.polyfit(log_x_3_c, log_y_3_c, 1)
ap_3 = np.poly1d(f3)

# зависимость логарифма угла от номера измерения
fig1, ax1 = plt.subplots()
plt.scatter(log_x_1, log_y_1)
plt.plot(x_c_1, ap_1(x_c_1), color = 'red')
ax1.set_xlabel('n')
ax1.set_ylabel(r" $ln \varphi$")


fig2, ax2 = plt.subplots()
plt.scatter(log_x_2, log_y_2)
plt.plot(x_c_2, ap_2(x_c_2), color = 'red')
ax2.set_xlabel('n')
ax2.set_ylabel(r" $ln \varphi$")


fig3, ax3 = plt.subplots()
plt.scatter(log_x_3, log_y_3)
plt.plot(x_c_3, ap_3(x_c_3), color = 'red')
ax3.set_xlabel('n')
ax3.set_ylabel(r" $ln \varphi$")












# период от амплитуды
fig4, ax4 = plt.subplots()
plt.scatter(exp_1_amp_deg, exp_1_data_array)
plt.plot(angls , t1)

fig5, ax5 = plt.subplots()
plt.scatter(exp_2_amp_deg, exp_2_data_array)
plt.plot(angls , t2)

fig6, ax6 = plt.subplots()
plt.scatter(exp_3_amp_deg, exp_3_data_array)
plt.plot(angls , t3)

fig7, ax7 = plt.subplots()
plt.scatter((exp_1_amp_deg ) ** 2, exp_1_data_array)
plt.plot((angls)**2, t0_1 * (1 + 0.25 * (np.sin(angls / 2)) ** 2 + 9 / 64 * (np.sin(angls / 2)) ** 4 ))

# период от положения груз
fig8, ax8 = plt.subplots()
plt.scatter(ar_cm_t_r , t0_ar)
plt.plot(x_teor_t, y_teor_t)
plt.show()



