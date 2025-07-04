#!/bin/bash
# 启动 Xvfb 虚拟显示
Xvfb :1 -screen 0 1024x768x16 &

# 可选：验证 Xvfb 是否运行
if ! pgrep Xvfb >/dev/null; then
    echo "❌ Xvfb 启动失败！"
    exit 1
else
    echo "✅ Xvfb 已启动 (DISPLAY=:1)"
fi

# 安装 Python 依赖（如果未在 Dockerfile 中安装）
pip install -r requirements.txt 2>/dev/null || pip install ursina panda3d