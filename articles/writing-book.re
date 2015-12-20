={writing-book} 技術書を書くための要求

#@# NOTE author:mhidaka

//lead{
本章では、TechBoosterがお勧めする「Re:VIEW」を使ったエンジニア向けの執筆・編集スタイルを紹介します。
自然言語による文章もプログラムを書くのと大差ないな！と思っていただければ幸いです。
//}

== Re:VIEWとは

#@# NOTE author:mhidaka

「@<kw>{Re:VIEW,レビュー}」は、書籍制作のためのツールセットです。

技術書は、知識を体系的にまとめ読者の興味関心を誘引するもっともポピュラーな手段ですが、執筆や編集については独自のノウハウがあり、統一したものが存在していません。
書籍制作は本来、手作業が多く専門知識を必要とする、ハードルの高い領域なのです。

しかし「Re:VIEW」を使えば、これまでよりずっと手軽に技術書を作ることができます。

本を作る工程を@<img>{review-cover}に示します。

//image[review-cover][Re:VIEWがカバーする領域][scale=0.35]{
//}

ごらんの通り「Re:VIEW」は「執筆」「校正」「組版」「製版」までと、非常に幅広い範囲をサポートします。

TechBoosterでは「Re:VIEW」を使うことで効率的に文書管理、執筆環境を構築できるようになりました@<fn>{products}。

//footnote[products][制作する書籍は年間8冊（述べ1000ページ超）を数えます。ヤバすぎ]

=={requirement} 本を作るための技術的要求

#@# NOTE author:vvakame

わたしたちTechBoosterが考える、技術書を書くためにあるとよい機能を挙げます。

 * 文書の共有とリビジョン管理がしやすい
 * コメントを利用できる
 * HTMLやPDF、epubなど複数の形式に変換できる
 * 文書の構造と見た目（スタイル）が分離されている

世の中には「Re:VIEW」以外にも、Microsoft Wordなどのワープロソフトや、Markdown、textile、reStructuredText、AsciiDoc、LaTeX、Sphinxなどのマークアップまで、さまざまな形式があります。
この中から、これらの条件にマッチしないものは避けたほうがよいというのがわたしたちの考えです。

=== 文書の共有とリビジョン管理がしやすい

プログラムのソースコードと同様に、文書もリビジョン管理ができると便利です。
リビジョン管理があれば、いらないのではないか？と思った節をバッサリ削ることも気軽にできます。
また、いつ誰がどう変更したかを追跡できたり、どのくらいの分量を書いたかが分かるのは想像以上のメリットです。

=== コメントを利用できる

コメントは、メモを書き残したり、他人の原稿にレビューを書き込む時に使います。
たとえばIssueに@<code>{原稿の○行目に対する指摘 > わかる→分かる に置き換え}といちいち書くのは、書くのも苦行、Issueと原稿を見比べて直すのも苦行です。

原稿とレビュー結果を別々の場所に置くべきではないと、わたしたちは考えています。
レビュー結果はコメントを使い、原稿にインラインに書き込んでいくスタイルを推奨しています。

=== HTMLやPDF、epubなど複数の形式に変換できる

執筆した文書を、Webサイトとして公開したい場合、印刷所に入稿したい場合、電子書籍として配布したい場合など、用途に応じたフォーマットに変換しなくてはなりません。
そのため、なるべくたくさんの形式に変換できるものがよいでしょう。

=== 文書の構造と見た目（スタイル）が分離されている

構造と見た目が分離されていない場合、文書構造の質がツールを使う人の練度に左右される場合があります。

これはGUIツールにありがちですが、たとえば、章タイトルの文字を大きくしたい時を考えます。
該当行を見出しという文書構造だと設定しそのスタイルを適用する方法と、文字を単に大きく太く装飾する方法は構造としては全く違います。
両者を比べると見た目としては変わりがないため、単に文字を大きく装飾して終わってしまう人がいます。

前者のやり方であれば、見出しのスタイルを一括で変更したり、目次を生成したりすることができるというのに！
後者のやり方は使わないでね！と伝えて済む場合もありますが、それよりも根本的に構造とスタイルが分離されているツールを使うほうが楽です。

== TechBoosterが「Re:VIEW」を勧める理由

「Re:VIEW」は、@<hd>{requirement}に述べた理由をすべて満たします。

「Re:VIEW」は、本文をプレーンテキストファイルで執筆するので、Gitなどを使ってリビジョンを管理できます。
そのままGitHubなどを通じて作業をしたり、「Travis CI」や「Circle CI」、その他Re:VIEW専用CI「@<kw>{Griflet, グリフレット}」などを利用できます。
また、HTMLやPDF、epubやMarkdownといった主要な形式への変換にも対応しています。
さらに、文書の構造と見た目が十分に分離されているので、原稿ができてから見た目を調整することができます。

そして「Re:VIEW」は、出版を生業としている方々が作っているので「本を書くための工夫」がたくさん詰まっています。
日本人が作っているツールだけあって、日本固有の事情も考慮されているので、今までたくさんの本の製作に使われてきた実績@<fn>{archievement}があり、そうそう落とし穴に落ちたりすることもありません。

わたしたちは「Re:VIEW」を使うだけで、先人たちの知恵を活用することができるのです。

//footnote[archievement][Re:VIEWの利用実績 @<href>{https://github.com/kmuto/review/wiki/%E5%88%A9%E7%94%A8%E5%AE%9F%E7%B8%BE}]
