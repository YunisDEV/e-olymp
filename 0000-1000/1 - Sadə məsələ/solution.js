const readline = require('readline')

const rl = readline.createInterface({
    input:process.stdin,
    output:process.stdout
})

rl.question('',(input)=>{
    console.log(input[0] + " " + input[1])
    rl.close()
})