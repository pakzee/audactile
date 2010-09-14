#ifndef COLLECTIONTREEWIDGETITEM_H
#define COLLECTIONTREEWIDGETITEM_H

#include <QTreeWidgetItem>
#include <QUrl>

class CollectionTreeWidgetItem : public QTreeWidgetItem
{
public:
    enum TreeLevel { LevelNone = 0, LevelArtist = 1, LevelAlbum = 2, LevelMusic = 3 };
    explicit CollectionTreeWidgetItem(TreeLevel level, QTreeWidget *parent = 0);
    unsigned int getNodeLevel();
    QList<QUrl> getUrlList();

private:
    unsigned int level;

signals:

public slots:

};

#endif // COLLECTIONTREEWIDGETITEM_H
