//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, MPMediaQuery, MPQueueFeeder, MPUReportingPlaybackObserver, NMCAVController, NMCNowPlayingObserver, NMCTaskAssertion, NSDictionary, NSMutableArray;

@interface NMCPlaybackController : NSObject
{
    NMCAVController *_AVController;
    NSMutableArray *_deferredPlaybackActions;
    NMCNowPlayingObserver *_nowPlayingObserver;
    BOOL _observingVirtualAudioRouteChangeNotifications;
    MPUReportingPlaybackObserver *_reportingPlaybackObserver;
    NMCTaskAssertion *_playbackTaskAssertion;
    unsigned int _playbackCommandTaskIdentifier;
}

+ (id)sharedController;
@property(nonatomic) double currentTime;
@property(nonatomic, getter=_playbackCommandTaskIdentifier, setter=_setPlaybackCommandTaskIdentifier:) unsigned int playbackCommandTaskIdentifier; // @synthesize playbackCommandTaskIdentifier=_playbackCommandTaskIdentifier;
- (void)reloadQueueWithPlaybackContext:(id)arg1;
- (void)_performAfterPickedRouteBecomesAvailable:(CDUnknownBlockType)arg1;
- (void)_createNowPlayingObserverIfNecessary;
- (void)_configureSharedAVSystemControllerAttributes;
@property(readonly, nonatomic, getter=_AVController) NMCAVController *AVController;
- (void)seekPlaylist:(int)arg1;
- (void)seekAlbum:(int)arg1;
- (void)beginOrTogglePlayback;
@property(readonly, nonatomic, getter=_existingAVController) NMCAVController *existingAVController;
@property(readonly, nonatomic) unsigned int mediaRemotePlaybackState;
- (void)_virtualAudioRoutesDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) MPQueueFeeder *queueFeeder;
- (void)pause;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (id)init;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, nonatomic) BOOL canSeekForwards;
@property(readonly, nonatomic) MPMediaQuery *currentMediaQuery;
- (void)applyShuffleSettings;
- (void)applyRepeatSettings;
@property(nonatomic) unsigned int shuffleType;
@property(nonatomic) unsigned int repeatType;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2;
- (void)endSeek;
- (void)beginSeek:(int)arg1;
- (void)endPlayback;
@property(readonly, nonatomic) unsigned int playbackState;

@end

