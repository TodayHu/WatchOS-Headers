//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@interface NPKCollectionView : UICollectionView
{
    BOOL _suppressStartTimer;
    BOOL _suppressUpdateVisibleCells;
}

@property BOOL suppressUpdateVisibleCells; // @synthesize suppressUpdateVisibleCells=_suppressUpdateVisibleCells;
@property BOOL suppressStartTimer; // @synthesize suppressStartTimer=_suppressStartTimer;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 additionalAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_addControlledSubview:(id)arg1 atZIndex:(int)arg2;
- (void)_startTimer:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

