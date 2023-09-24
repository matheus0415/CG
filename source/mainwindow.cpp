#include <mainwindow.h>

MainWindow::MainWindow(QWidget *parent)
    : QOpenGLWidget(parent)
{
}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    initializeOpenGLFunctions();

    // Configurar cor de fundo para branco
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void MainWindow::paintGL()
{
    // Limpa o buffer da tela
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Configurar a cor vermelha
    glColor3f(1.0f, 0.0f, 0.0f);

    // Desenhar um triângulo
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
    glEnd();
}

void MainWindow::resizeGL(int width, int height)
{
    // Atualiza as configurações da viewport e projeção
    glViewport(0, 0, width, height);
}

void MainWindow::mousePressEvent(QMouseEvent* event)
{
    // Função para lidar com eventos de clique do mouse

    if(event->button() == Qt::LeftButton)
    {
        std::cout << "Mouse pressionado !" << std::endl;
    }
}

void MainWindow::keyPressEvent(QKeyEvent* event)
{
    // Função para lidar com eventos pressionamento de tecla do teclado

    if(event->key() == Qt::Key_W)
    {
        std::cout << "Voce pressionou a tecla W !" << std::endl;

    }
    else if(event->key() == Qt::Key_A)
    {
        std::cout << "Voce pressionou a tecla A !" << std::endl;

    }
    else if(event->key() == Qt::Key_S)
    {
        std::cout << "Voce pressionou a tecla S !" << std::endl;

    }
    else if(event->key() == Qt::Key_D)
    {
        std::cout << "Voce pressionou a tecla D !" << std::endl;
    }
}
