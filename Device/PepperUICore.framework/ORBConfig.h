//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ORBConfig : NSObject
{
    BOOL _blurEnabled;
    BOOL _shouldIgnoreEdgesAndCorners;
    float _progressMinimum;
    float _progressLatch;
    float _progressMaximum;
}

+ (id)sharedConfig;
@property(nonatomic) BOOL shouldIgnoreEdgesAndCorners; // @synthesize shouldIgnoreEdgesAndCorners=_shouldIgnoreEdgesAndCorners;
@property(nonatomic) float progressMaximum; // @synthesize progressMaximum=_progressMaximum;
@property(nonatomic) float progressLatch; // @synthesize progressLatch=_progressLatch;
@property(nonatomic) float progressMinimum; // @synthesize progressMinimum=_progressMinimum;
@property(nonatomic, getter=isBlurEnabled) BOOL blurEnabled; // @synthesize blurEnabled=_blurEnabled;
- (id)init;

@end

