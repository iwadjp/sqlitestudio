## CP932対応フォークについて / About this CP932 fork

このリポジトリは [pawelsalawa/sqlitestudio](https://github.com/pawelsalawa/sqlitestudio) のフォークです。
SQLite 2形式・CP932（Shift-JIS）エンコードの日本語データベースを扱えるよう修正しています。

This is a fork of [pawelsalawa/sqlitestudio](https://github.com/pawelsalawa/sqlitestudio),
adding CP932 (Shift-JIS) encoding support for SQLite 2 databases containing Japanese text.

### 変更内容 / Changes
- DbSqlite2プラグインにエンコーディング選択オプションを追加
- abstractdb2.hの文字変換処理をエンコーディング対応に修正（UTF-8ハードコード→動的コーデック解決）

### ダウンロード / Download
[Releases](https://github.com/iwadjp/sqlitestudio/releases/tag/v3.2.1-cp932) から
Windows 64ビット版バイナリをダウンロードできます。

### 動作環境 / Requirements
- Windows 64ビット
- SQLite 2.x形式のDBファイル
- CP932（Shift-JIS）エンコードの日本語データ

---

# SQLiteStudio

A free, open source, multi-platform SQLite database manager written in C++, with use of Qt framework.


## Want to contribute?
https://github.com/pawelsalawa/sqlitestudio/wiki/How_can_I_contribute?


## Home page
https://sqlitestudio.pl/


## Compilation from sources
https://github.com/pawelsalawa/sqlitestudio/wiki/Compiling_application_from_sources


## Discussion forum
https://forum.sqlitestudio.pl/


## Bugs & feature requests tracker
https://github.com/pawelsalawa/sqlitestudio/issues


## Project's Wiki
https://github.com/pawelsalawa/sqlitestudio/wiki
