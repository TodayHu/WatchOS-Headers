//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKWellnessComplicationDisplay.h"

@class NSArray, NSString, NTKColoringLabel;

@interface NTKWellnessLargeModuleView : NTKComplicationModuleView <NTKWellnessComplicationDisplay>
{
    unsigned int _currentLayoutScheme;
    NSArray *_dataDisplayLayoutViews;
    NSArray *_alternateLayoutViews;
    NTKColoringLabel *_caloriesTitleLabel;
    NTKColoringLabel *_minutesTitleLabel;
    NTKColoringLabel *_hoursTitleLabel;
    NTKColoringLabel *_caloriesDataLabel;
    NTKColoringLabel *_minutesDataLabel;
    NTKColoringLabel *_hoursDataLabel;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
}

- (void)_setLayoutAlternateWithTitle:(id)arg1 body:(id)arg2;
- (void)_setNeedsLayoutWithScheme:(unsigned int)arg1;
- (void)_layoutSchemeAlternate;
- (void)_layoutSchemeDataDisplay;
- (void)_useLayout:(unsigned int)arg1;
- (void)setWellnessComplicationActiveHoursCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationBriskMinutesCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationCaloriesBurnedCurrent:(float)arg1 goal:(float)arg2;
- (void)setWellnessComplicationPromptSetup;
- (void)setWellnessComplicationLoading;
- (void)setWellnessComplicationLocked;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)layoutContentView;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

