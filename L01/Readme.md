# So sánh kiến trúc CISC và RISC

# Khái niệm cơ bản

## Khái niệm cơ bản về CISC (Complex Instruction Set Computer)

A complex instruction set computer (CISC /ˈsɪsk/) is a computer architecture in which single instructions can execute several low-level operations (such as a load from memory, an arithmetic operation, and a memory store) or are capable of multi-step operations or addressing modes within single instructions

## Khái niệm cơ bản về RISC (Reduced Instruction Set Computer)

In electronics and computer science, a reduced instruction set computer (RISC, pronounced "risk") is a computer architecture designed to simplify the individual instructions given to the computer to accomplish tasks.

## So sánh theo tiêu chí

(Có tham khảo ChatGPT)
| Mục | Tiêu chí | CISC | RISC |
| ----------------------- | ---------------------- | ------------------------------------- | ------------------------------------------ |
| Cấu trúc lập trình | Mức độ phức tạp lệnh | Lệnh phức tạp, làm được nhiều việc | Lệnh đơn giản, mỗi lệnh làm 1 việc |
| | Kiểu truy cập bộ nhớ | Lệnh có thể truy cập memory trực tiếp | Load/Store: chỉ load/store mới chạm memory |
| | Gánh nặng cho compiler | Thấp hơn | Cao hơn (compiler phải tối ưu tốt) |
| Tốc độ xử lý | Số chu kỳ / lệnh | Nhiều chu kỳ cho 1 lệnh | Thường 1 chu kỳ / lệnh |
| | Pipeline | Khó tối ưu | Rất hiệu quả |
| | Song song hóa | Kém hơn | Tốt hơn |
| Kích thước chương trình | Số instruction | Ít | Nhiều |
| | Kích thước code | Nhỏ hơn | Lớn hơn |
| | Độ dài instruction | Không cố định | Cố định |
| Độ phức tạp phần cứng | Decoder | Phức tạp | Đơn giản |
| | Control unit | Thường dùng microcode | Hardwired, đơn giản |
||Thiết kế CPU|Khó|Dễ|
||Tiêu thụ điện|Cao hơn|Thấp hơn|
|Ứng dụng thực tế|Máy tính cá nhân|Rất phổ biến|Ít|
||Thiết bị di động|Ít|Rất phổ biến|
||Hệ nhúng|Ít|Rất nhiều|
||Server hiện đại|Có (x86)|Tăng mạnh (ARM, RISC-V)|
