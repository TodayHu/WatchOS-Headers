//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "PUICCrownInputSequencerDelegate.h"

@class NSString, PUICCrownInputSequencer;

@interface UIScrollView (PUICAdditions) <PUICCrownInputSequencerDelegate>
+ (void)load;
- (void)_puic_averageCrownVelocityDidChange;
- (BOOL)_puic_isVisible;
- (float)_puic_visibleContentLength;
- (float)_puic_scrollableContentLength;
@property(readonly, nonatomic, getter=puic_existingCrownInputSequencer) PUICCrownInputSequencer *existingCrownInputSequencer;
- (double)_puic_crownInputSequencerOffsetForContentOffset:(struct CGPoint)arg1;
@property(nonatomic, getter=puic_crownInputScrollDirection, setter=puic_setCrownInputScrollDirection:) int crownInputScrollDirection;
- (void)_puic_hideCrownIndicator;
- (void)_puic_configureCrownInputSequencer;
- (void)_puic_configureCrownInputSequencerLengthForScrollViewContentSize;
- (id)_puic_associatedObject;
- (BOOL)_puic_isTracking;
- (BOOL)_puic_isDecelerating;
- (BOOL)_puic_isDragging;
- (void)_puic_setDelegate:(id)arg1;
- (void)_puic_setScrollEnabled:(BOOL)arg1;
- (void)_puic_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_puic_setContentSize:(struct CGSize)arg1;
- (void)_puic_notifyDidScroll;
- (void)flashCrownIndicator;
- (BOOL)_puic_isTouchTracking;
- (void)_puic_contentOffsetDidChange;
- (struct CGPoint)_puic_contentOffsetForCrownInputSequencerOffset:(double)arg1;
- (BOOL)_crownInputSequencerShouldSuppressInput:(id)arg1;
- (void)crownInputSequencerDidEndDecelerating:(id)arg1;
- (void)crownInputSequencerWillBeginDecelerating:(id)arg1;
- (void)crownInputSequencerDidBecomeIdle:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)crownInputSequencerWillBecomeIdle:(id)arg1 withCrownVelocity:(double)arg2 targetOffset:(inout double *)arg3;
- (BOOL)crownInputSequencer:(id)arg1 shouldRubberBandAtBoundary:(int)arg2;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
@property(readonly, nonatomic, getter=puic_crownInputSequencer) PUICCrownInputSequencer *crownInputSequencer;
- (BOOL)canBecomeFirstResponder;
- (void)_wheelChangedWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

