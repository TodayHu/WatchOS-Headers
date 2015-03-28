//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface PUICEventThrottler : NSObject
{
    double _lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _eventBlock;
    id _value;
    double _minimumDelay;
}

@property(nonatomic) double minimumDelay; // @synthesize minimumDelay=_minimumDelay;
- (void)_fire;
- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)init;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;

@end

