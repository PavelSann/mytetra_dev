#ifndef _EDITORTABLEPROPERTIESFORM_H_
#define _EDITORTABLEPROPERTIESFORM_H_

#include <QDialog>
#include <QToolButton> // Почему-то не работает предварительное определение класса (этап линковки), приходится включать инклюдом
#include <QLabel>
#include <QSpinBox>
#include <QDialogButtonBox>
#include <QColor>


class EditorTablePropertiesForm : public QDialog
{
 Q_OBJECT

public:
  EditorTablePropertiesForm();

  int getTableWidth(void);
  int getBorderWidth(void);
  QColor getBackgroundColor(void);

protected slots:

  void onClickedButtonBackgroundColor();

private:

  // Ширина таблицы
  QLabel labelTableWidth;
  QLabel labelTablePercent;
  QSpinBox spinTableWidth;

  // Толщина линий таблицы
  QLabel labelBorderWidth;
  QLabel labelBorderPix;
  QSpinBox spinBorderWidth;

  // Цвет фона таблицы
  QLabel labelBackgroundColor;
  QToolButton buttonBackgroundColor;
  QColor backgroundColor;

  // Кнопки Ok и Concel
  QDialogButtonBox buttonBox;

  void setupUi();
  void setupSignals();
  void assembly();

  void setupFirstValues();

  void setColorForButtonBackgroundColor(QColor iColor);
};

#endif // _EDITORTABLEPROPERTIESFORM_H_