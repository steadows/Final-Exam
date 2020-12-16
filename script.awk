BEGIN{
        FS=","
        }
$3 ~/yes/ {POOLCOUNT += 1}
$1 ~/[0-9]/ && $1 >= 4 {FOURPLUSCOUNT += 1}
$1 ~/[0-9]/ && $1 >= 4 {HOUSEPRICES += $4}


END{
        
        print "Pool count =", POOLCOUNT
        print "Average 4+ beds =", (HOUSEPRICES/FOURPLUSCOUNT)
}