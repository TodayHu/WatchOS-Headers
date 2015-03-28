//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityTimeLabelImageComplicationView.h>

#import "NTKAlarmComplicationDisplay.h"

@class NSDate, NSString;

@interface NTKShortAlarmUtilityComplicationView : NTKUtilityTimeLabelImageComplicationView <NTKAlarmComplicationDisplay>
{
    NSDate *_alarmDate;
}

- (void)_updateContentForMaxSizeChange;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;
- (void)_updateTime;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

