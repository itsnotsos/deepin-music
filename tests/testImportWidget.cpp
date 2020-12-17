#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "application.h"

#include <QTest>
#include <QDebug>
#include <QPoint>
#include <QTimer>
#include <infodialog.h>
#include <DApplication>
#include <DIconButton>
#include <QStandardPaths>
#include <DPushButton>
#include <DFileDialog>

#include "ac-desktop-define.h"

#include "mainframe.h"
#include "playlistview.h"
#include "musicsonglistview.h"
#include "musiclyricwidget.h"
#include "musicbaselistview.h"
#include "lrc/lyriclabel.h"
#include "importwidget.h"
#include "musicsettings.h"

TEST(Application, importWidget)
{
    // 删除所有音乐
    TEST_CASE_NAME("importWidget")

//    MainFrame *w = Application::getInstance()->getMainWindow();
//    MusicBaseListView *baseListView = w->findChild<MusicBaseListView *>(AC_dataBaseListview);
////    ImportWidget *importWidget = w->findChild<ImportWidget *>(AC_ImportWidget);


//    // 点击所有音乐
//    QPoint pos = QPoint(130, 100);
//    QTestEventList event;
//    event.addMouseMove(pos);
//    event.addMouseClick(Qt::MouseButton::LeftButton, Qt::NoModifier, pos, 10);
//    event.simulate(baseListView->viewport());
//    event.clear();


//    // dialog list 点击
//    QTest::qWait(50);
//    QTimer::singleShot(200, w, [ = ]() {
//        // 清空ListView
//        QTest::qWait(50);
//        DDialog *messageBox = w->findChild<DDialog *>("MessageBox");
//        if (messageBox) {
//            QPoint pos = QPoint(130, 150);
//            QTestEventList event;
//            event.addMouseMove(pos);
//            event.addKeyClick(Qt::Key::Key_Tab, Qt::NoModifier, 10);
//            event.addKeyClick(Qt::Key::Key_Tab, Qt::NoModifier, 10);
//            event.addKeyClick(Qt::Key::Key_Tab, Qt::NoModifier, 10);
//            event.addKeyClick(Qt::Key::Key_Tab, Qt::NoModifier, 10);
//            event.addKeyClick(Qt::Key::Key_Enter, Qt::NoModifier, 50);
//            event.simulate(messageBox);
//            event.clear();
//        }
//    });

//    // 全选
//    pos = QPoint(20, 20);
//    PlayListView *plv = w->findChild<PlayListView *>(AC_PlayListView);
//    event.addMouseMove(pos);
//    event.addKeyClick(Qt::Key_A, Qt::ControlModifier, 10);
//    event.simulate(plv->viewport());
//    event.clear();
//    plv->slotRmvFromSongList();


//    // fileDialog 回车
//    QTimer::singleShot(500, w, [ = ]() {
//        QTest::qWait(50);
//        DFileDialog *fileDialog = w->findChild<DFileDialog *>("fileDialog");
//        if (fileDialog) {
//            fileDialog->close();

//            QTest::qWait(100);
//            MainFrame *w = Application::getInstance()->getMainWindow();
//            QLabel *ilt = w->findChild<QLabel *>(AC_importLinkText);
//            ilt->linkActivated("");
//            QTest::qWait(1000);
////            QTestEventList event;
////            event.addKeyClick(Qt::Key::Key_Enter, Qt::NoModifier, 50);
////            event.simulate(w);
////            event.clear();
//        }
//    });

//    QTest::qWait(100);
//    DPushButton *importPath = w->findChild<DPushButton *>(AC_importButton);
//    event.addMouseMove(pos);
//    event.addMouseClick(Qt::MouseButton::LeftButton, Qt::NoModifier, pos, 10);
//    event.simulate(importPath);
//    event.clear();

//    QTest::qWait(1000);
}
