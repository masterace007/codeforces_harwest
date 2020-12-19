n = int(input())
count_7_decimal = 0
count_7_octal = 0
count = n;
text = ""
common_od = set()
for i in range(1,n+1):
    text = str(i);
    if '7' in text:
        common_od.add(i)
        #count_7_decimal = count_7_decimal + 1

text = ""
for i in range(1,n+1):
    text = str(oct(int(i)));
    if '7' in text:
        common_od.add(i)
        #count_7_octal = count_7_octal + 1

length_of_common = len(common_od);
count = count - length_of_common;
print(count)