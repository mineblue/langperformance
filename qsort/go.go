package main

import (
	"fmt"
	"strconv"
  "bufio"
  "os"
)

func qsort(d []int, left, right int) []int {
	i := left + 1
	k := right
	var w int
	for i < k {
		for d[i] < d[left] && i < right {
			i = i + 1
		}
		for d[k] >= d[left] && k > left {
			k = k - 1
		}
		if i < k {
			w = d[i]
			d[i] = d[k]
			d[k] = w
		}
	}
	if d[left] > d[k] {
		w = d[left]
		d[left] = d[k]
		d[k] = w
	}
	if left < k-1 {
		qsort(d, left, k-1)
	}
	if k+1 < right {
		qsort(d, k+1, right)
	}
	return d
}

func main() {
	data := make([]int, 100000)
  i := 0
  filename := "./data"
  // ファイルオープン
  fp, err := os.Open(filename)
  if err != nil {
      // エラー処理
  }
  defer fp.Close()
  scanner := bufio.NewScanner(fp)
  for scanner.Scan() {
    val, _ := strconv.Atoi(scanner.Text());
    data[i] = val
    i++
  }
  fmt.Println("readed")
  //fmt.Println(data)

	qsort(data, 0, len(data)-1)
	//fmt.Println(data)
}
