//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerItem, AVPlayerLayer, AVQueuePlayer, NSArray, NSMutableArray, NSMutableSet, NSObject<PUICVideoPlayerViewDelegate>, PUICTaskSequencer, PUICVideo, _PlayerView;

@interface PUICVideoPlayerView : UIView
{
    PUICVideo *_currentVideo;
    AVPlayerItem *_currentPlayerItem;
    NSMutableArray *_pendingVideos;
    PUICTaskSequencer *_taskSequencer;
    AVQueuePlayer *_player;
    AVPlayerLayer *_playerLayer;
    _PlayerView *_playerView;
    CDStruct_1b6d18a9 _requestedSeekTime;
    NSMutableSet *_coveringViews;
    BOOL _prerolledNextVideo;
    NSObject<PUICVideoPlayerViewDelegate> *_delegate;
    int _state;
}

@property(readonly, nonatomic) PUICVideo *currentVideo; // @synthesize currentVideo=_currentVideo;
- (void)fadeToColor:(id)arg1 duration:(double)arg2;
- (void)showPosterImageViewForVideo:(id)arg1;
- (void)transitionToVideo:(id)arg1 duration:(double)arg2;
- (void)seekToPercentage:(float)arg1 canCoalesce:(BOOL)arg2;
- (void)playFromStartSeconds:(double)arg1 toEndSeconds:(double)arg2;
- (void)playFromStartFrame:(int)arg1 toEndFrame:(int)arg2;
- (void)playVideo:(id)arg1;
- (void)clearAllVideosAndPause;
- (void)prerollNextVideo;
- (void)advance;
- (void)setPendingVideos:(id)arg1;
- (void)removePendingVideo:(id)arg1;
@property(readonly, nonatomic) NSArray *pendingVideos;
- (void)_performTaskPlay;
- (void)showPosterImageViewForVideo:(id)arg1 duration:(double)arg2;
- (void)_performTaskSeek:(CDStruct_1b6d18a9)arg1;
- (void)_removePosterImageViews;
- (void)_prepareForPlayback;
- (void)playFromStart;
- (void)addPendingVideo:(id)arg1;
- (void)removeAllPendingVideos;
- (void)_performTaskAdvance;
- (void)_performTaskPause;
- (void)_performTaskPlayFromStartTime:(CDStruct_1b6d18a9)arg1 toEndTime:(CDStruct_1b6d18a9)arg2 consultDelegate:(BOOL)arg3;
- (void)_pauseWithoutChangingState;
- (void)_playedToEnd:(id)arg1;
- (void)pause;
- (void)stop;
- (void).cxx_destruct;
- (void)_setState:(int)arg1;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak NSObject<PUICVideoPlayerViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)play;

@end

