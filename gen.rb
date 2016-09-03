1.upto(10) do |i|
  b = rand(1000001)
  p = rand(1300997)
  m = rand(2**31)

  m = b if rand(2) == 0

  input = File.open("test_#{i}.in", 'w')
  input.write("#{b} #{p} #{m}\n")
  input.close

  output = File.open("test_#{i}.out", 'w')
  r = (b ** p) % m
  ans = (r == 0) ? "Si" : "No"
  output.write("#{ans}\n")
end
