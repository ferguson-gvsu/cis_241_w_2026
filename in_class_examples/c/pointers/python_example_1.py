def test_func(x):
  print(f"Inside before change: {x}")
  x += 1
  print(f"Inside after change: {x}")

x = 5
print(f"Outside before function call: {x}")
test_func(x)
print(f"Outside after function call: {x}")
