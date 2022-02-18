#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "strlabel.hh"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    formula = "";
    aux = "";
    ui->label_formula->setText(QString::fromStdString(formula));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_parenthesesL_clicked()
{
    formula.append(" ( ");
    aux.append("(");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_parenthesesR_clicked()
{
    formula.append(" ) ");
    aux.append(")");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_and_clicked()
{
    formula.append(" ∧");
    aux.append("&");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_or_clicked()
{
    formula.append(" ∨");
    aux.append("#");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_implication_clicked()
{
    formula.append(" →");
    aux.append(">");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_deny_clicked()
{
    formula.append(" ¬");
    aux.append("-");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_delet_clicked()
{
    if(formula.size() > 0){
        if(formula[formula.size()-2] >= 'A' && formula[formula.size()-2] <= 'Z' ||
           formula[formula.size()-2] == '(' || formula[formula.size()-2] == ')' ){
            formula.pop_back();
            formula.pop_back();
            formula.pop_back();
        }else{
            while(formula[formula.size()-1] != ' ')
                formula.pop_back();
            formula.pop_back();
        }
        aux.pop_back();
        ui->label_formula->setText(QString::fromStdString(formula));
    }
}


void MainWindow::on_button_p_clicked()
{
    formula.append(" P ");
    aux.append("p");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_q_clicked()
{
    formula.append(" Q ");
    aux.append("q");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_r_clicked()
{
    formula.append(" R ");
    aux.append("r");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_s_clicked()
{
    formula.append(" S ");
    aux.append("s");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_t_clicked()
{
    formula.append(" T ");
    aux.append("t");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_u_clicked()
{
    formula.append(" U ");
    aux.append("u");
    ui->label_formula->setText(QString::fromStdString(formula));
}


void MainWindow::on_button_enter_clicked()
{
    ui->label_result->setText(QString::fromStdString(output_formula(aux)));
    ui->tabWidget->setCurrentIndex(1);
}

