//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIView;

@interface PUICUISnapshotWindow : UIWindow
{
    UIView *_snapshot;
    long long _visibilityCount;
}

- (void).cxx_destruct;
- (_Bool)_canAffectStatusBarAppearance;
- (void)popVisible;
- (void)pushVisible;
- (void)setSnapshot:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

