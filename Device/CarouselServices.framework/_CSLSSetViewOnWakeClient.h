//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@interface _CSLSSetViewOnWakeClient : BSBaseXPCClient
{
}

+ (id)sharedInstance;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4;
- (_Bool)setViewOnWake:(id)arg1 withID:(id)arg2 withPriority:(unsigned int)arg3 synchronous:(_Bool)arg4;
- (id)init;

@end

