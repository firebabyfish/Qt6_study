#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author", "Frsh");
    Q_CLASSINFO("version", "1.0");
    Q_PROPERTY(qint8 getAge READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_Name)
    Q_PROPERTY(qint8 score MEMBER m_Score)
public:
    explicit TPerson(QString name, QObject *parent = nullptr);
    ~TPerson();
    int getAge();
    void setAge(quint8 ageValue);
    void incAge();
signals:
    void ageChanged(int ageValue);
private:
    QString m_Name;
    quint8 m_Age = 10;
    quint8 m_Score = 79;
};

#endif // TPERSON_H
