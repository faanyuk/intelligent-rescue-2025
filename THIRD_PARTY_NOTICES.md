# Third-Party Notices

本文件记录仓库中包含或依赖的第三方软件和素材。项目的 MIT License 仅适用于项目作者拥有版权的原创代码。

## Ultralytics YOLO

- 项目：https://github.com/ultralytics/ultralytics
- 用途：目标检测模型加载与推理
- 许可证：AGPL-3.0 或 Ultralytics Enterprise License
- 使用位置：`jetson/main.py`、`jetson/vision.py`

Ultralytics YOLO 不属于本项目 MIT License 的授权范围。使用者必须自行遵守 Ultralytics 的许可条款。

## 波特律动 / Keysking OLED 驱动及配套字库

- 用途：SSD1306 OLED 显示驱动及配套字库
- 使用位置：
  - `stm32/hardware/oled.c`
  - `stm32/hardware/oled.h`
  - `stm32/hardware/font.c`
  - `stm32/hardware/font.h`
- 已知来源：波特律动 / Keysking
- 已知许可信息：`oled.c` 文件头声明为 MIT License

这些文件属于或改编自第三方作品，不属于本项目作者原创代码的 MIT 授权范围。相关文件中已有的来源、作者和许可信息必须保留。

当前仓库尚未记录准确的上游仓库地址、完整版权人及版权年份。在重新分发这些文件前，应核实其上游来源，并补充完整的原始版权声明和许可证副本。`font.c` 和 `font.h` 未包含独立、明确的许可证声明，因此不得仅依据项目根目录的 MIT License 推定其许可。

## 其他运行时依赖

本项目还可能依赖 OpenCV、NumPy、PySerial、PyTorch 和 STM32 HAL 等软件。这些软件未包含在本项目原创代码的 MIT 授权中，分别适用其自身的许可证。

## 模型与数据

模型权重、训练数据、数据集和标注文件不自动采用本项目的 MIT License。发布这些内容时，应在对应目录中提供单独、明确的许可和来源说明。

## 图片和媒体素材

`images/` 目录中的证书、照片、赛事标识及其他媒体素材不采用 MIT License。除非相应文件旁另有明确的许可声明，相关权利均予保留。
