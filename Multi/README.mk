# 多周期RV32E处理器
## 背景
多周期处理器是在2025年1月厦门基地基本完成的，但当时为了追赶进度，从单周期到多周期的改动并没有太大，把IDU，EXU合并为一个文件，LSU，WBU合并为一个文件，每个模块间没有插入寄存器，相当于只做了适配运行soc环境的支持
