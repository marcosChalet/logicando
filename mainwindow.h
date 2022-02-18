#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_parenthesesL_clicked();

    void on_button_parenthesesR_clicked();

    void on_button_and_clicked();

    void on_button_or_clicked();

    void on_button_implication_clicked();

    void on_button_deny_clicked();

    void on_button_delet_clicked();

    void on_button_p_clicked();

    void on_button_q_clicked();

    void on_button_r_clicked();

    void on_button_s_clicked();

    void on_button_t_clicked();

    void on_button_u_clicked();

    void on_button_enter_clicked();

private:
    Ui::MainWindow *ui;
    std::string formula;
    std::string aux;
};
#endif // MAINWINDOW_H
