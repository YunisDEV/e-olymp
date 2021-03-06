package main

import "fmt"

func main() {
  var a string
  fmt.Scan(&a)
  var deg int

  for i := 0; i<= (len(a) - 1) / 2; i++ {
    if a[i] == a[len(a) - i - 1] {
      deg++
    }
  }

  fmt.Println(deg)
}