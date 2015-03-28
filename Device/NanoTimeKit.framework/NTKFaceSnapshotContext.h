//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, NSCalendar, NSDate, NSString;

@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSDate *_date;
    NSCalendar *_calendar;
    NSString *_monogram;
    NSString *_locale;
    NSString *_buildVersion;
    NSString *_tzVersion;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (BOOL)locationSignificantlyDiffersFromContext:(id)arg1;
- (BOOL)localeMatchesContext:(id)arg1;
- (BOOL)timeZoneMatchesContext:(id)arg1;
- (BOOL)calendarDateMatchesContext:(id)arg1;
@property(retain, nonatomic) NSString *tzVersion; // @synthesize tzVersion=_tzVersion;
- (double)distanceInKilometersFromContext:(id)arg1;
- (id)_yearMonthDay;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *monogram; // @synthesize monogram=_monogram;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

