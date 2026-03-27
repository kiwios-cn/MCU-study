# MCU-study

51 单片机（STC89C52）学习代码，基于 Keil C51。

## 文件说明

| 文件 | 内容 |
|------|------|
| `running_light.c` | 流水灯：P1 口控制 8 个 LED 依次点亮 |
| `timer.c` | 定时器基础：Timer0 中断计时 |
| `timer_improved.c` | 定时器改进版：更精确的延时控制 |

## 硬件

- **单片机**：STC89C52（或兼容 8051）
- **开发板**：标准 51 最小系统板
- **编译器**：Keil uVision (C51)

## 流水灯原理

```c
// P1 口低电平点亮 LED
P1 = ~temp;       // 取反：只有 temp 对应的位为高（灯灭），其余低（灯亮）
temp = temp << 1; // 左移，下一个灯亮
```

## 烧录

1. Keil 编译生成 `.hex` 文件
2. STC-ISP 软件下载到单片机

## 环境要求

- Keil uVision 4/5（C51 版本）
- STC-ISP 烧录软件
