//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIStatusBarServer;

@protocol UIStatusBarServerClient
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveDoubleHeightStatusString:(NSString *)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStatusBarData:(const CDStruct_6ed4d2ba *)arg2 withActions:(int)arg3;
@end

