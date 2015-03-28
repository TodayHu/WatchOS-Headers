//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject
{
    int _type;
    NSDate *_waypointDate;
    NSString *_localizedName;
    NTKSolarTimeModel *_solarTimeModel;
    float _percentageThroughPeriodForWaypointDate;
}

- (id)_almanacForSunAltitudeInDegrees:(double)arg1;
- (BOOL)_almanacIsStale:(id)arg1;
@property(readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // @synthesize solarTimeModel=_solarTimeModel;
@property(readonly, nonatomic) NSDate *waypointDate; // @synthesize waypointDate=_waypointDate;
@property(readonly, nonatomic) float percentageThroughPeriodForWaypointDate; // @synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate;
- (void)updateDependentValues;
- (void)updateDependentValuesWithPlaceholderData;
- (id)initWithType:(int)arg1 solarTimeModel:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;

@end

