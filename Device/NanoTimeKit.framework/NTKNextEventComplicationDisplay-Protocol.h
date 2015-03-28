//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTKComplicationDisplay.h"

@class NSDate, NSString;

@protocol NTKNextEventComplicationDisplay <NTKComplicationDisplay>
- (void)setNextEventComplicationNoEventsAtAllTomorrow;
- (void)setNextEventComplicationCoincidingStartTimeEventsTomorrowWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3 firstCoincidentEventTitle:(NSString *)arg4 secondCoincidentEventTitle:(NSString *)arg5;
- (void)setNextEventComplicationSingleEventTomorrowWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 title:(NSString *)arg3 location:(NSString *)arg4 conflictFlag:(BOOL)arg5;
- (void)setNextEventComplicationNoEventsRemaining;
- (void)setNextEventComplicationNoEventsAtAll;
- (void)setNextEventComplicationCoincidingStartTimeEventsTodayWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3 firstCoincidentEventTitle:(NSString *)arg4 secondCoincidentEventTitle:(NSString *)arg5;
- (void)setNextEventComplicationSingleEventTodayWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 title:(NSString *)arg3 location:(NSString *)arg4 conflictFlag:(BOOL)arg5;
- (void)setNextEventComplicationFetching;
- (void)setNextEventComplicationLocked;
@end

