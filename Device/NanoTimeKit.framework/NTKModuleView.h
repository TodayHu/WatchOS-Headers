//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NTKContainerViewLayoutDelegate.h"

@class NSString, NTKContainerView, UIColor;

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate>
{
    BOOL _animatesForegroundColors;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    UIColor *_highlightBackgroundColor;
    float _contentHeight;
    float _highlightAlpha;
    NTKContainerView *_contentView;
}

+ (float)cornerRadius;
@property(nonatomic) BOOL animatesForegroundColors; // @synthesize animatesForegroundColors=_animatesForegroundColors;
@property(nonatomic) float highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryForegroundColor; // @synthesize secondaryForegroundColor=_secondaryForegroundColor;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(float)arg2 baseFont:(id)arg3;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(float)arg2 baseFont:(id)arg3;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_setTypographicTracking:(float)arg1 andFont:(id)arg2 onAttributedString:(id *)arg3 inRange:(struct _NSRange)arg4;
- (void)layoutContentView;
- (id)_newLabelSubview;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void)setHighlighted:(BOOL)arg1;
@property(readonly, nonatomic) NTKContainerView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;
- (void)layoutContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

