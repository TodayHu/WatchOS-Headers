//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CSLSUITriggerRegistration, NSDictionary, NSString;

@protocol CSLSUIProvider
- (void)requestUITriggerWithRegistration:(CSLSUITriggerRegistration *)arg1 UITriggerName:(NSString *)arg2 withDictionary:(NSDictionary *)arg3 withReason:(int)arg4 withCompletion:(void (^)(BOOL, NSString *))arg5;
@end

