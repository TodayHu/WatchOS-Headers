//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString;

@interface CSLUITimeImageView : UILabel
{
    BOOL _isTracking;
    BOOL _tracksClock;
    BOOL _needsRecenter;
}

+ (float)minimizedHeight;
+ (id)fontForSize:(float)arg1 proportional:(BOOL)arg2;
@property(nonatomic) BOOL needsRecenter; // @synthesize needsRecenter=_needsRecenter;
@property(nonatomic) BOOL tracksClock; // @synthesize tracksClock=_tracksClock;
@property(copy, nonatomic) NSString *dateText;
- (void)setHeightScale:(float)arg1;
- (void)_setDateText:(id)arg1;
- (void)setFontSize:(float)arg1 proportional:(BOOL)arg2;
- (void)_updateSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

