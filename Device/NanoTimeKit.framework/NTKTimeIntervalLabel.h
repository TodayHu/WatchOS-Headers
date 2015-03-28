//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont, UILabel;

@interface NTKTimeIntervalLabel : UIView
{
    double _time;
    BOOL _showSubSeconds;
    UILabel *_label;
    UIFont *_font;
    NSString *_text;
    NSMutableArray *_digits;
    NSMutableDictionary *_images;
    float _prefixWidth;
    float _labelWidth;
    float _digitWidth;
    struct CGSize _textSize;
    BOOL _isShowingDigits;
    BOOL _labelWasSized;
    BOOL _frozen;
}

- (id)initWithMonospacedFontOfSize:(float)arg1;
- (void)sizeToFitLabelIfNeeded;
- (void)createDigitViews;
- (BOOL)shouldShowDigits;
@property(readonly, nonatomic) BOOL showSubSeconds; // @synthesize showSubSeconds=_showSubSeconds;
- (id)imageForDigitWithNumber:(unsigned int)arg1;
- (id)formatTimeInterval;
- (id)imageForDigit:(id)arg1;
- (void)calculateMetrics;
- (void)createImages;
- (void).cxx_destruct;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLabelText:(id)arg1;

@end

