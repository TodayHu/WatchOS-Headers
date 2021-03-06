//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    double _field2[8];
    double _field3[8];
} CDStruct_31bcd8b6;

typedef struct {
    _Bool _field1[25];
    char _field2[64];
    int _field3;
    int _field4;
    char _field5[100];
    char _field6[100];
    char _field7[2][100];
    char _field8[1024];
    unsigned int _field9;
    int _field10;
    int _field11;
    unsigned int _field12;
    int _field13;
    unsigned int _field14;
    char _field15[150];
    int _field16;
    int _field17;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    char _field18[256];
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field19;
} CDStruct_1f4d094c;

typedef struct {
    unsigned int scrollViewWillEndDraggingWithVelocityTargetContentOffset:1;
    unsigned int scrollViewWillBeginDragging:1;
    unsigned int scrollViewDidEndDraggingWillDecelerate:1;
    unsigned int scrollViewWillBeginDecelerating:1;
    unsigned int scrollViewDidEndDecelerating:1;
} CDStruct_ab02ea00;

