# RESTAURANT-BILLING-SYSTEM

*Project Title

Restaurant Billing System in C

*Objective

The primary objective of this project is to create a simple console-based restaurant billing system using the C programming language. The system allows a user (e.g., a cashier) to:

1.Take a customer's name.

2.Display a fixed menu with item prices.

3.Allow the user to select items and quantities repeatedly.

4.Calculate the subtotal (Total Amount) of the selected items.

5.Calculate the Goods and Services Tax (GST) at a fixed rate of 5% on the subtotal.

6.Calculate the final bill amount (Final Amount).

7.Display a summary of the bill on the console.

8.Save the detailed bill, including a list of items and the final summary, to a text file named after the customer (e.g., CustomerName.txt).

*How to Compile and Run the Program

1.The program is written in standard C and can be compiled and run using a C compiler like GCC.

2.Save the Code: Save the provided C code in a file named restaurant_billing_sytem.c.

3.Compile: Open a terminal or command prompt and use the GCC compiler to compile the source file.
gcc restaurant_billing_system.c -o restaurant_billing_system

4.Run: Execute the compiled program from the terminal.
./restaurant_billing_system
(Note: On Windows, you might run it as restaurant_billing_system.exe)

*Sample Outputs

<img width="538" height="542" alt="image" src="https://github.com/user-attachments/assets/1a0f8965-2b1e-487f-9d10-fb977ba4e2fa" />

<img width="593" height="577" alt="image" src="https://github.com/user-attachments/assets/a10f0ef4-5e8d-4348-9ef8-fc34b76aa5a8" />

<img width="540" height="537" alt="image" src="https://github.com/user-attachments/assets/90238ed3-8dcc-4cb6-87d5-78802098f795" />

*Important Notes or Assumptions

1.Customer Name Input: The program only reads the first word of the customer name (due to scanf("%49s", customerName);). Spaces in the name will terminate the input.

2.Menu and Pricing: The menu items and their prices are fixed and hardcoded within the source file. Any change requires recompilation.

3.GST Rate: The GST is fixed at 5% (0.05) for all items.

4.Error Handling: Basic error handling is present for file opening failures and invalid menu choices. Invalid choices are skipped, and the user is prompted to continue ordering.

5.File Output: The program saves the bill detail and summary to a text file in the same directory as the executable, named after the customer.





