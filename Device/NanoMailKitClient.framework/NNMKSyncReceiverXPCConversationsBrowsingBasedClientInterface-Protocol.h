//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NNMKSyncReceiverXPCBasicClientInterface.h"

@class NSArray, NSError, NSString, NSURL;

@protocol NNMKSyncReceiverXPCConversationsBrowsingBasedClientInterface <NNMKSyncReceiverXPCBasicClientInterface>
- (oneway void)receiverXPCServerDidChangeSyncedMailboxType:(unsigned int)arg1 accountId:(NSString *)arg2 url:(NSURL *)arg3 customName:(NSString *)arg4;
- (oneway void)receiverXPCServerDidNotifyFetchRequestCompleted;
- (oneway void)receiverXPCServerDidNotifyOldMessagesAvailable;
- (oneway void)receiverXPCServerDidFailSyncingMessagesWithError:(NSError *)arg1;
- (oneway void)receiverXPCServerDidFinishSyncingMessagesSuccessfullyReceivingMessages:(BOOL)arg1;
- (oneway void)receiverXPCServerDidExecuteConversationOperations:(NSArray *)arg1;
@end

