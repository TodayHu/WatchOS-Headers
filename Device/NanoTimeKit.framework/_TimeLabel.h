//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKColoringLabel.h>

#import "_TimeLabel.h"

@class NSAttributedString, NSString, NTKDigitalTimeLabelStyle, NTKTimeFormatter, UIColor;

@interface _TimeLabel : NTKColoringLabel <_TimeLabel>
{
    NTKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    float _maxWidth;
    NTKDigitalTimeLabelStyle *_style;
    NSAttributedString *_correctAttributedText;
    BOOL _showsDesignator;
    BOOL _showsSubstringToSeparator;
    BOOL _showsSubstringFromSeparator;
    struct CGSize _cachedIntrinsicSize;
    BOOL _animationsPaused;
    BOOL _showsBlinker;
    BOOL _showsNumbers;
    BOOL _usesLegibility;
    float _legibilityOutset;
}

- (void)setMaxWidth:(float)arg1;
@property(nonatomic) BOOL showsNumbers; // @synthesize showsNumbers=_showsNumbers;
@property(nonatomic) BOOL showsBlinker; // @synthesize showsBlinker=_showsBlinker;
@property(readonly, nonatomic) float legibilityOutset; // @synthesize legibilityOutset=_legibilityOutset;
@property(nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(nonatomic) BOOL animationsPaused; // @synthesize animationsPaused=_animationsPaused;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (id)initWithTimeFormatter:(id)arg1 showsDesignator:(BOOL)arg2 showsSubstringToSeparator:(BOOL)arg3 showsSubstringFromSeparator:(BOOL)arg4;
- (id)_attributedTextShowingBlinker:(BOOL)arg1 numbers:(BOOL)arg2;
- (void)_updateAttributedText;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;
- (void)setStyle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTimeText;

// Remaining properties
@property(nonatomic) BOOL colorIsAnimatable;
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

