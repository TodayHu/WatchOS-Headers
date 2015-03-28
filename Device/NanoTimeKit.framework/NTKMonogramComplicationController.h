//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationController.h>

@class NSString;

@interface NTKMonogramComplicationController : NTKComplicationController
{
    NSString *_monogramText;
}

@property(nonatomic) __weak id <NTKMonogramComplicationDisplay> display;
- (void)_handleLocaleChange;
- (void)_handleFaceDefaultsChanged:(id)arg1;
- (void)_handleCustomMonogramChanged:(id)arg1;
- (void)_reloadMonogramText;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)arg1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_updateDisplay;

@end

