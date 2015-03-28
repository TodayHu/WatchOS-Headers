//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _AnimatedEmojiSpecification {
    int animatedEmojiType;
    char *name;
    char loops;
    char *posterImageName;
    int lowerHalfPanningChooserType;
    int upperHalfPanningChooserType;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    double _field2[8];
    double _field3[8];
} CDStruct_32e70f54;

typedef struct {
    char _field1[25];
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
} CDStruct_6ed4d2ba;

typedef struct {
    unsigned int scrollViewWillEndDraggingWithVelocityTargetContentOffset:1;
    unsigned int scrollViewWillBeginDragging:1;
    unsigned int scrollViewDidEndDraggingWillDecelerate:1;
    unsigned int scrollViewWillBeginDecelerating:1;
    unsigned int scrollViewDidEndDecelerating:1;
} CDStruct_ab02ea00;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
} CDStruct_5c5366e1;

