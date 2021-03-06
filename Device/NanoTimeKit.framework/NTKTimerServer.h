//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface NTKTimerServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_clientConnections;
    double _fireTime;
    double _countdownDuration;
    BOOL _isCarouselReady;
    BOOL _isRestoreDone;
    BOOL _isServerReady;
}

+ (BOOL)isTimerNotification:(id)arg1;
+ (void)run;
- (void)requestUpdateState;
- (void)setDefaultCountdownDuration:(double)arg1;
- (void)pauseResumeTimer:(BOOL)arg1;
- (void)startTimer:(double)arg1;
- (void)_saveState;
- (id)_defaultTimerSound;
- (void)_reloadTimerState;
- (void)_prepareTimerServerForStoreDemo;
- (void)_handleSignificantTimeChange;
- (void)_queue_updateClientsExcept:(id)arg1;
- (void)getModelWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleCarouselReady;
- (void)_handleRestoreDone;
- (void)_updateForNotification:(id)arg1;
- (void)_handleLocalNotificationDidFire:(id)arg1;
- (void)_startServerIfReady;
- (void)_initServer;
- (void)_observeDemoMovieNotifications:(BOOL)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

