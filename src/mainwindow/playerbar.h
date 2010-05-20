#ifndef PLAYERBAR_H
#define PLAYERBAR_H

#include <QToolBar>
#include <QToolButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <phonon/MediaObject>
#include <phonon/SeekSlider>
#include <phonon/VolumeSlider>


using namespace Phonon;

class PlayerBar : public QToolBar
{
    Q_OBJECT

public:
    PlayerBar(QWidget *parent, Phonon::MediaObject *mediaObject);

public slots:
    void updateSongPosition();
    void updateSongInformation(QString newSongInformation);
    void handleState(Phonon::State oldState, Phonon::State newState);
    void handlePlayButton();
    void handleStopButton();
    void finish();

private:
    Phonon::MediaObject *mainMediaObject;
    QLabel *currentSongPosition;
    QLabel *remainingSongPosition;
    QLabel *currentSongInfo;
    SeekSlider *songPositionSlider;

    QToolButton *playButton;
    QToolButton *stopButton;
    QToolButton *exitButton;
    QToolButton *nextButton;
    QToolButton *prevButton;
    QToolButton *prefButton;

    void resetDisplay();

};

#endif // PLAYERBAR_H
