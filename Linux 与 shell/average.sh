#!/bin/bash

# 检查是否提供了文件名作为参数
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 filename"
    exit 1
fi

# 读取文件名
filename=$1

# 检查文件是否存在
if [ ! -f "$filename" ]; then
    echo "File not found: $filename"
    exit 1
fi

# 初始化总和和计数器
sum=0
count=0

# 读取文件中的每一行
while IFS= read -r number; do
    # 检查是否为数字
    if ! [[ "$number" =~ ^[0-9]+$ ]]; then
        echo "Error: Non-numeric value found: $number"
        exit 1
    fi
    # 累加数字
    sum=$((sum + number))
    # 计数器增加
    ((count++))
done < "$filename"

# 计算平均值
if [ $count -eq 0 ]; then
    echo "No numbers found in file."
    exit 1
else
    average=$(echo "scale=2; $sum / $count" | bc)
fi

# 输出总和和平均值
echo "Sum: $sum"
echo "Average: $average"

# 创建JSON对象
json="{ \"sum\": $sum, \"average\": \"$average\" }"

# 将JSON输出到文件
output_json_file="output.json"
echo "$json" > "$output_json_file"

# 输出JSON文件名
echo "JSON output written to: $output_json_file"
