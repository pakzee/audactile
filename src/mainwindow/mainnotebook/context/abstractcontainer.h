#ifndef ABSTRACTCONTAINER_H
#define ABSTRACTCONTAINER_H

#include <QFrame>
#include <QVBoxLayout>
#include <QWebView>
#include <QLabel>
#include <QString>
#include <QDesktopServices>

class AbstractContainer : public QFrame
{
Q_OBJECT
public:
    AbstractContainer(QWidget *parent = 0);
    void setHtml(QString html);

private:
    QString header;
    QString footer;
    QWebView *contentView;

private slots:
    void openLinksInExternalWindow(QUrl url);

signals:

public slots:

};

#endif // ABSTRACTCONTAINER_H