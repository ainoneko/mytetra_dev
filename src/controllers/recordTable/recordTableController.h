#ifndef __RECORDTABLECONTROLLER_H__
#define __RECORDTABLECONTROLLER_H__

#include <QObject>

class RecordTableView;
class RecordTableData;
class RecordTableModel;
class RecordTableProxyModel;


class recordTableController : public QObject
{
  Q_OBJECT
public:
  explicit recordTableController(QObject *parent = 0);

signals:

public slots:

  // Вызов действий для копирования записей в буфер обмена с удалением
  void cut(void);

  // Вызов действий для копирования записей в буфер обмена
  void copy(void);

  // Вызов действий для вставки записей из буфера
  void paste(void);

  // Вызов действий из контекстного меню для открытия окна с вводом новой записи
  void addNewToEndContext(void);
  void addNewBeforeContext(void);
  void addNewAfterContext(void);

  // Вызов действий из контекстного меню для редактирования инфополей записи
  void editFieldContext(void);

  // Вызов действий из контекстного меню для удаления конечной записи
  void deleteContext(void);

  void moveUp(void);
  void moveDn(void);

  // Клик по пункту "Сортировка" в контекстном меню
  void onSortClick(void);

protected:
  RecordTableView *recordTableView;
  RecordTableModel *recordSourceModel; // Класс, расширенный от QAbstractTableModel
  RecordTableProxyModel *recordProxyModel;

};

#endif // __RECORDTABLECONTROLLER_H__