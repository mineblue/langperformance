<?php
$cnt = 0;
function qsort($bottom, $top, &$data){
    global $cnt;
    ++$cnt;
    if($bottom >= $top){
        return;
    }
    //先頭の値を「適当な値」とする
    $div = $data[$bottom];

    //$data[$bottom]番目より大きい値を後ろに持っていく
    for($lower = $bottom, $upper = $top; $lower < $upper;){
        //$lower番目の値が適当に選択した値以下の限り
        while($lower <= $upper && $data[$lower] <= $div){
            $lower++; //最終的な$lowerの値は$divよりも大きい値の配列番号になる
        }
        //$upper番目の値が適当に選択した値より大きい限り
        while($lower <= $upper && $data[$upper] > $div){
            $upper--;//最終的な$lowerの値は$divよりも小さい値の配列番号になる
        }
        //もし$divより大きな値が、$divより小さい値よりも前に有った場合、順番を入れ替える
        if($lower < $upper){
            $temp = $data[$lower];
            $data[$lower] = $data[$upper];
            $data[$upper] = $temp;
        }
    }
    //最初に選択した値を中央に移動
    $temp = $data[$bottom];
    $data[$bottom] = $data[$upper];
    $data[$upper] = $temp;
    qsort($bottom, $upper -1, $data);
    qsort($upper + 1, $top, $data);
}

$sort = array();
$N = 100000;
$i = 0;

$file = fopen("./data", "r");

if ($file) {
  while ($line = fgets($file)) {
    $sort[$i] = (int)$line;
    //echo $sort[$i] . "\n";
    $i++;
  }
}
fclose($file);

qsort(0, $N-1, $sort);
echo $cnt; //133403
