//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol NACVolumeController <NSObject>
@property(nonatomic, getter=isSystemMuted) BOOL systemMuted;
@property(nonatomic) float hapticIntensity;
@property(readonly, nonatomic) float EUVolumeLimit;
@property(readonly, nonatomic) float volumeValue;
@property(readonly, nonatomic, getter=isMuted) BOOL muted;
@property(readonly, nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property(nonatomic) __weak id <NACVolumeControllerDelegate> delegate;
- (void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3;
- (void)setMuted:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)endObservingVolume;
- (void)beginObservingVolume;
- (id)initWithAudioCategory:(NSString *)arg1;
@end

