
 i=$(ls AcpiTables/acpi/)
for i in $i
do
#echo "FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {" >> acpi.inc
echo "SECTION RAW = F11/AcpiTables/acpi/$i   " >>  acpi.inc
#echo "SECTION UI = "AcpiTables" }" >> acpi.inc
done
exit
