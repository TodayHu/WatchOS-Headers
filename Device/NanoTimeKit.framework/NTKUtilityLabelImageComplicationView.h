//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityLabelComplicationView.h>

@class NTKColoringImageView;

@interface NTKUtilityLabelImageComplicationView : NTKUtilityLabelComplicationView
{
    NTKColoringImageView *_imageView;
}

- (float)_imageViewForegroundAlpha;
- (float)availableWidthForLabel;
- (id)_newImageViewSubview;
- (float)_widthThatFits;
- (void)_applyForegroundAlpha;
- (void).cxx_destruct;
@property(retain, nonatomic) NTKColoringImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;

@end

