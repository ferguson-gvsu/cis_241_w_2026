BEGIN {
  print "Beginning now!"  
}
$3 >= 2000 {
  count_new += 1
}
$3 < 2000 {
  count_old += 1
}
$3 ~ /200[0-9]/ {
  print "Oughts detected: " $0
}
$1 == "ford"{
  print "Its a ford: " $0
}
{ total_cost += $5 }
{ makes[$1] += 1 }
END {
  print "Number of new cars: " count_new
  print "Number of old cars: " count_old
  print "Average cost: " total_cost / NR
  for (key in makes) { print "Found " makes[key] " " key }
  print "Ending now!"
}
