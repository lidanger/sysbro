#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DMainWindow>
#include <QStackedLayout>
#include "homepage.h"
#include "networkmanager.h"
#include <QLabel>
#include <dspinner.h>

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void switchToHomePage();
    void switchToFailedPage();
    void handleTestBtnClicked(int server_index);
    void handleSuccess(quint64 speed, QString speedStr);
    void updateStatus(QString speed);

private:
    QStackedLayout *m_stackedLayout;
    HomePage *m_homePage;
    NetworkManager *m_networkManager;
    DSpinner *m_progress;
    QLabel *m_statusLabel;
    QLabel *m_resultLabel;
};

#endif // MAINWINDOW_H
