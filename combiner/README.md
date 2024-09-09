# [AHC用ツール] 複数ファイルに記述された C++ コードを提出用に単一ファイルに結合するツール

## 使い方

```
python3 combiner.py <source_file> <output_file>
```

<source_file> の記述方法については main.cpp を例として参照してください。

include 関係に循環参照がある場合はエラーになります。

## Reference

このツールは yunix さんの [AHC-cpp-template-public](https://github.com/yunix-kyopro/AHC-cpp-template-public)
を参考にして開発しました。