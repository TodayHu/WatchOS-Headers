//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NPKPassDescription, PKDiff, PKPass;

@interface NPKPassView : UIView
{
    BOOL _showFullPass;
    BOOL _showDiff;
    BOOL _needsUpdateUI;
    BOOL _updateNeedsHeightChange;
    BOOL _pendingHeightChangeCallback;
    NPKPassDescription *_passDescription;
    PKPass *_pass;
    PKDiff *_diff;
    id <NPKPassViewDelegate> _delegate;
    int _uiWorkStackCount;
}

+ (void)setCaching:(BOOL)arg1;
+ (id)viewForPassDescription:(id)arg1 withFrame:(struct CGRect)arg2;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) int uiWorkStackCount; // @synthesize uiWorkStackCount=_uiWorkStackCount;
@property(nonatomic) BOOL showDiff; // @synthesize showDiff=_showDiff;
- (void)setPassDescription:(id)arg1 forceUIUpdate:(BOOL)arg2;
@property(nonatomic) BOOL needsUpdateUI; // @synthesize needsUpdateUI=_needsUpdateUI;
@property(nonatomic) BOOL updateNeedsHeightChange; // @synthesize updateNeedsHeightChange=_updateNeedsHeightChange;
- (void)_performUIWork:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdateUIWithHeightChange:(BOOL)arg1;
@property(nonatomic) BOOL pendingHeightChangeCallback; // @synthesize pendingHeightChangeCallback=_pendingHeightChangeCallback;
- (void)updateUIIfNeeded;
- (BOOL)handleTapAtPoint:(struct CGPoint)arg1 andScrollWithBehavior:(int *)arg2 toOffset:(struct CGPoint *)arg3;
- (void)passContentScrollingBegan;
- (void)passContentScrollingAnimationEndedWithOffset:(struct CGPoint)arg1;
- (void)passContentScrolledToOffset:(struct CGPoint *)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PKDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) BOOL showFullPass; // @synthesize showFullPass=_showFullPass;
- (void)setNeedsUpdateUIWithHeightChange:(BOOL)arg1;
- (void)setNeedsUpdateUI;
- (void)updateUI;
@property(retain, nonatomic) NPKPassDescription *passDescription; // @synthesize passDescription=_passDescription;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NPKPassViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

