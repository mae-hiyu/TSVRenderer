import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from matplotlib.animation import FuncAnimation

def read_random_data(filename):
    """
    ファイルから改行区切りの数値データを読み込む関数。
    """
    data = []
    try:
        with open(filename, 'r') as file:
            for line in file:
                try:
                    value = float(line.strip())  # 各行を数値として読み込む
                    data.append(value)
                except ValueError:
                    continue  # 数値でない行を無視
    except FileNotFoundError:
        print(f"{filename} が見つかりません")
    
    return data

def update_kde(frame):
    """
    アニメーションの各フレームでKDEプロットを更新するための関数。
    """
    data = read_random_data('samples.txt')
    
    if data:
        ax.clear()  # 現在のプロットをクリア
        sns.kdeplot(data, ax=ax, color='blue', fill=True, bw_adjust=0.5, alpha=0.7)  # KDEプロット
        ax.set_xlabel('Value')
        ax.set_ylabel('Density')
        ax.set_title('Real-time Kernel Density Plot')
        ax.grid(True)
        ax.set_xlim(min(data), max(data))  # データ範囲に基づいてX軸を設定
    return ax

# プロット設定
fig, ax = plt.subplots(figsize=(10, 6), tight_layout=True)

# アニメーション設定
ani = FuncAnimation(fig, update_kde, interval=5000)  # 5秒ごとにKDEを更新

# KDEプロットを表示
plt.show()