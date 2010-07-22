#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QTreeWidgetItem>
#include <QMessageBox>
#include <QFileInfo>
#include <QMap>
#include <QUrl>
#include <phonon/MediaSource>
#include <phonon/MediaObject>
#include <phonon/AudioOutput>

class PlaylistItem : public QObject, public QTreeWidgetItem
{
    Q_OBJECT

public:
    PlaylistItem(QString);
    PlaylistItem(QUrl url);
    QUrl getFileUrl();
    QString getArtist();
    QString getTitle();
    void setBold();
    void removeBold();
    QString getSongInfo();
    qint64 getDuration();
    int index; // Index where item must be inserted at PlaylistWidget


private:
    QUrl fileUrl;

    Phonon::MediaObject *mediaObject;

    QString artist;
    QString title;
    QString album;
    qint64 duration;

private slots:
    void loadMetaData(Phonon::State newState);

signals:
    void validFile(PlaylistItem*);
    void invalidFile(PlaylistItem*);

};

#endif // PLAYLISTITEM_H
