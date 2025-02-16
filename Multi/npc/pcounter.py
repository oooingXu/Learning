import pandas as pd
import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

# 读取CSV文件
data = pd.read_csv("performance_trace.csv", header=None)
data.columns = ['g_nr_guest_clk','ifu_clk_count','backend_clk','ifu_flash_clk','ifu_psram_clk','i_clk','b_clk','r_clk','j_clk','c_clk']

# 绘制图形
plt.figure(figsize=(10, 6))
plt.plot(data['g_nr_guest_clk'], data['ifu_clk_count'], label='frontend Count')
plt.plot(data['g_nr_guest_clk'], data['backend_clk'], label='backend Count')
plt.plot(data['g_nr_guest_clk'], data['ifu_flash_clk'], label='ifu_flash Count')
plt.plot(data['g_nr_guest_clk'], data['ifu_psram_clk'], label='ifu_psram Count')
plt.plot(data['g_nr_guest_clk'], data['i_clk'], label='i_clk Count')
plt.plot(data['g_nr_guest_clk'], data['b_clk'], label='b_clk Count')
plt.plot(data['g_nr_guest_clk'], data['r_clk'], label='r_clk Count')
plt.plot(data['g_nr_guest_clk'], data['j_clk'], label='j_clk Count')
plt.plot(data['g_nr_guest_clk'], data['c_clk'], label='c_clk Count')

# 添加其他参数的绘图
plt.xlabel('Clock Cycles (g_nr_guest_clk)')
plt.ylabel('Performance Counter Values')
plt.title('Performance Counter Trace')
plt.legend()
plt.grid()

plt.show()
