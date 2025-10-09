const fs = require("fs");
const path = require("path");
const filePath = path.join(__dirname, "student_scores_100.csv");

fs.readFile(filePath, "utf8", (err, data) => {
  if (err) {
    console.error("Error reading the CSV file:", err);
    return;
  }
  const scores = data // transform data into array of nums
    .trim()
    .split(/\r?\n/)
    .map((line) => {
      const [, scoreStr] = line.split(",");
      return Number(scoreStr);
    });

  console.log(`Elements of scores Array before sorting`, scores);

  let buckets = [];
  // ! the input should be scores[j] -> '86' -> should go into buckets[86] : []
  // ! heart of the algorithm
  for (let j = 0; j < scores.length; j++) {
    let bucketIndex = scores[j];
    if (!buckets[bucketIndex]) buckets[bucketIndex] = [];
    buckets[bucketIndex].push(bucketIndex);
  }

  // ! concatenate buckets together in order
  let result = [];
  for (let k = 0; k < buckets.length; k++) {
    if (!buckets[k]) continue;
    result.push(...buckets[k]);
  }

  console.log(`Result of using bucket sort on scores:`, result);
});
