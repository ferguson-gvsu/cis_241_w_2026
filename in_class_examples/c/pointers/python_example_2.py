def test_func(L):
  print(f"Inside before change: {L}")
  L.append(1000000)
  print(f"Inside after change: {L}")

my_list = [1, 3, 5]
print(f"Outside before function call: {my_list}")
test_func(my_list)
print(f"Outside after function call: {my_list}")
