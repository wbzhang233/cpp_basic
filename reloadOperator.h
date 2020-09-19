//
// Created by wbzhang on 2020/8/11.
//

#ifndef CPPBASIC_RELOADOPERATOR_H
#define CPPBASIC_RELOADOPERATOR_H

struct Point2d{
	double x,y;
	// 默认构造
	Point2d (){this->x = 0;this->y =0;};
	// 构造函数
	Point2d (int _x,int _y):x(_x),y(_y){ };
	// 加法重载
	Point2d operator+(const Point2d& pt)
	{
		Point2d res;
		res.x = this->x +pt.x;
		res.y = this->y +pt.y;
		return res;
	}
	// 大于号载入,先比较x坐标
	bool operator>(const Point2d& pt)
	{
		return  (this->x > pt.x) ? true : (this->x == pt.x && this->y > pt.y );
	}
};

#endif //CPPBASIC_RELOADOPERATOR_H
