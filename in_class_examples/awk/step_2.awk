BEGIN {
  print "Beginning now!"  
}
$3 >= 2000 {
  count_new += 1
}
$3 < 2000 {
  count_old += 1
}
$1 == "ford"{
  print "Its a ford: " $0
}
END {
  print "Number of new cars: " count_new
  print "Number of old cars: " count_old
  print "Ending now!"
}
