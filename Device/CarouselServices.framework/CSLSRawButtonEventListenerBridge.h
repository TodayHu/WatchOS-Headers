//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLSRawButtonEventListenerBridge : NSObject
{
    id <CSLSRawButtonEventListenerService> _service;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <CSLSRawButtonEventListenerService> service; // @synthesize service=_service;
- (void)addEventListener:(id)arg1;
- (void)removeEventListener:(id)arg1;
- (void).cxx_destruct;

@end

