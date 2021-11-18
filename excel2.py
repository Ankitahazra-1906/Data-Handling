import openpyxl
wb_obj=openpyxl.load_workbook("Top10ranksheet.xlsx")
sheet_obj = wb_obj.active
cells=sheet_obj['A1':'D11']
print(cells)
for c1, c2,c3,c4 in cells:
    print("{0:9} {1:9} {2:9} {3:9}".format(c1.value, c2.value,c3.value,c4.value))