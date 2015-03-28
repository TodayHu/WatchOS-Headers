//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIView;

@interface CUISAlertBackground : NSObject
{
    UIImage *_image;
    UIView *_view;
    id <CUISAlertBackgroundProvider> _backgroundProvider;
    CDUnknownBlockType _didChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didChangeHandler; // @synthesize didChangeHandler=_didChangeHandler;
@property(retain, nonatomic) id <CUISAlertBackgroundProvider> backgroundProvider; // @synthesize backgroundProvider=_backgroundProvider;
- (void)backgroundDidChange;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;

@end
