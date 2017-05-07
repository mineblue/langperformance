const MAX = 1000000;

for (let i = 0; i < MAX; i++) {
  if (i % 15 === 0) {
    process.stdout.write("fizzbuzz\n");
  } else if (i % 3 === 0) {
    process.stdout.write("fizz\n");
  } else if (i % 5 === 0) {
    process.stdout.write("buzz\n");
  } else {
    process.stdout.write(i + "\n");
  }
}
