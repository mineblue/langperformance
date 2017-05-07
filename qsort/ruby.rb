class Array
  def qsort
    return self if self.size <= 1
    mark = self[0]
    right = Array.new
    left = Array.new
    (1..self.size-1).each do |i|
      if self[i] <= mark
        left.push(self[i])
      else
        right.push(self[i])
      end
    end
    left = left.qsort
    right = right.qsort
    return left + [mark] + right
  end
end

data = []

File.open('/vagrant/performance/qsort/data', "r:utf-8" ) do |f|
  while line  = f.gets
    data.push(line.to_i)
  end
end

data = data.qsort
