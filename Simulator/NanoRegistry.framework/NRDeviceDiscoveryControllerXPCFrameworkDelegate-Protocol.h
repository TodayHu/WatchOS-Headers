//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRPropertyXPCFrameworkDelegate.h"

@class NRDevice, NSString, NSUUID;

@protocol NRDeviceDiscoveryControllerXPCFrameworkDelegate <NRPropertyXPCFrameworkDelegate>
- (void)xpcDidRestartDiscovery;
- (void)xpcDidDiscoverDevice:(NRDevice *)arg1 deviceID:(NSUUID *)arg2 advertisedName:(NSString *)arg3;
@end

