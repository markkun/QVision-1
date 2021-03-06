/*
 *	Copyright (C) 2008, 2009, 2010, 2011, 2012. PARP Research Group.
 *	<http://perception.inf.um.es>
 *	University of Murcia, Spain.
 *
 *	This file is part of the QVision library.
 *
 *	QVision is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as
 *	published by the Free Software Foundation, version 3 of the License.
 *
 *	QVision is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	You should have received a copy of the GNU Lesser General Public
 *	License along with QVision. If not, see <http://www.gnu.org/licenses/>.
 */


#include <QtGui>
#include "inputnode.h"


InputNode::InputNode(ItemProperties item, QString name, uint id, SlateWindow *wind, QGraphicsItem * parent, QGraphicsScene * scene): Node(item, name, id, wind, parent, scene)
{ }

void InputNode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget * widget)
{
	Node::paint(painter, option, widget);

	painter->setPen(Qt::darkGray);
    QRectF rect = outlineRect();
	painter->drawText((int)rect.right() - 12, (int)rect.top() + 12, ">");
	painter->drawText((int)rect.right() - 19, (int)rect.top() + 12, ">");
}
