//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableDictionary;

@interface NTKAlarmSnoozeTimer : NSObject
{
    BOOL _inForeground;
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned int _nextToken;
}

+ (id)sharedAlarmSnoozeTimer;
@property(nonatomic) unsigned int nextToken; // @synthesize nextToken=_nextToken;
@property(nonatomic) BOOL inForeground; // @synthesize inForeground=_inForeground;
- (void)_modelReload:(id)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_invokeHandlers;
- (void)_modelStateChanged:(id)arg1;
- (void)_foregrounded:(id)arg1;
- (void)_backgrounded:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)_updateTimer;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (id)init;
- (void)dealloc;
- (void)_tick:(id)arg1;

@end

