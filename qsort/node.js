const fs = require('fs');
let data = [];

fs.readFileSync('./data').toString().split('\n').forEach(function(line) {
  data.push(parseInt(line));
});


function qsort(startID,endID){
    var pivot = data[endID];
    var left = startID;
    var right = endID;

    while(true){
        while(data [left]<pivot){
            left++;
        }
        while(pivot<data [right]){
            right--;
        }
        if(right <= left){
            break;
        }
        var tmp = data [left];
        data [left] = data [right];
        data [right] = tmp;
        left++;
        right--;
    }


    if(startID < left-1){
        qsort(startID,left-1);
    }

    if(right+1 < endID){
        qsort(right+1,endID);
    }
}

qsort(0, data.length-1);
/*
data.forEach(function(v){
  console.log(v);
});
*/
