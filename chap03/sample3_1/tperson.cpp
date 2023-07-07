#include "tperson.h"

TPerson::TPerson(QString name, QObject *parent)
    : QObject{parent}, m_Name{name}
{

}

TPerson::~TPerson()
{
    qDebug("TPerson类的对象被删除");
}

int TPerson::getAge()
{
    return m_Age;
}

void TPerson::setAge(quint8 ageValue)
{
    if(m_Age != ageValue)
    {
        m_Age = ageValue;
        emit ageChanged(m_Age);
    }
}

void TPerson::incAge()
{
    m_Age++;
    emit ageChanged(m_Age);
}
