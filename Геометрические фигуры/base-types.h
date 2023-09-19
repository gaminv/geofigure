#ifndef BASE_TYPES_H
#define BASE_TYPES_H

#ifdef _MSC_VER // MS VS
#define __FS__ __FUNCSIG__
#else
#define __FS__ __PRETTY_FUNCTION__
#endif

struct point_t
{

    double x;
    double y;
};

struct rectangle_t
{

    double width;
    double height;
    point_t pos;
};

#endif