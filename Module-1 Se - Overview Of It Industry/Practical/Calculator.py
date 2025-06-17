import tkinter as tk
from tkinter import messagebox

def calculate(operation):
    try:
        num1 = float(entry_num1.get())
        num2 = float(entry_num2.get())

        if operation == '+':
            result = num1 + num2
        elif operation == '-':
            result = num1 - num2
        elif operation == '*':
            result = num1 * num2
        elif operation == '/':
            if num2 == 0:
                messagebox.showerror("Error", "Cannot divide by zero!")
                return
            result = num1 / num2

        label_result.config(text=f"Result: {result}")
    except ValueError:
        messagebox.showerror("Error", "Please enter valid numbers")

root = tk.Tk()
root.title("Simple Calculator")

tk.Label(root, text="Number 1:").grid(row=0, column=0, padx=10, pady=10)
entry_num1 = tk.Entry(root)
entry_num1.grid(row=0, column=1, padx=10, pady=10)

tk.Label(root, text="Number 2:").grid(row=1, column=0, padx=10, pady=10)
entry_num2 = tk.Entry(root)
entry_num2.grid(row=1, column=1, padx=10, pady=10)

# Operation buttons
frame_operations = tk.Frame(root)
frame_operations.grid(row=2, column=0, columnspan=2, pady=10)

btn_add = tk.Button(frame_operations, text="+", width=5, command=lambda: calculate('+'))
btn_add.pack(side='left', padx=5)

btn_sub = tk.Button(frame_operations, text="-", width=5, command=lambda: calculate('-'))
btn_sub.pack(side='left', padx=5)

btn_mul = tk.Button(frame_operations, text="*", width=5, command=lambda: calculate('*'))
btn_mul.pack(side='left', padx=5)

btn_div = tk.Button(frame_operations, text="/", width=5, command=lambda: calculate('/'))
btn_div.pack(side='left', padx=5)

label_result = tk.Label(root, text="Result: ")
label_result.grid(row=3, column=0, columnspan=2, pady=10)

root.mainloop()
