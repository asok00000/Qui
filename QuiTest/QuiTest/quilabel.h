#ifndef quilabel_h__
#define quilabel_h__

#include <QLabel>

class QUILabel : public QLabel
{
	Q_OBJECT

public:
	QUILabel(QWidget *parent);
	~QUILabel();
};
#endif // quilabel_h__
