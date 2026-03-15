BEGIN {
  print "Beginning now!"  
}
$1 == "ford"{
  print "Its a ford: " $0
}
END {
  print "Ending now!"
}
