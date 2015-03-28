//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPDataAccessDelegateProtocol.h"

@class NSMutableDictionary, NSString, SPComplicationData, SPComplicationDataAccess;

@interface SPComplicationDataClient : NSObject <SPDataAccessDelegateProtocol>
{
    SPComplicationDataAccess *_remoteDataAccess;
    BOOL _remoteDataActive;
    BOOL _paired;
    NSMutableDictionary *_subscribers;
    unsigned int _nextSubscriberCounter;
    BOOL _delayedRequestQueuedUp;
    SPComplicationData *_cachedClientData;
}

+ (id)sharedInstance;
- (void)dataAccess:(id)arg1 firstUnlock:(BOOL)arg2;
- (void)dataAccess:(id)arg1 complicationReply:(id)arg2;
- (void)_broadcastToAllSubscribers;
- (void)_broadcastNilToAllSubscribers;
- (void)_requestComplicationData;
- (void)_broadcastNilIfRequired:(double)arg1;
- (void)_broadcastToSubscriber:(id)arg1;
- (void)_updateServiceDataInterval;
- (void)nanoRegistryChanged:(id)arg1;
- (Class)_dataAccessDataClass;
- (id)_dataAccessBundleID;
- (int)verifyIncomingData:(id)arg1;
- (void)fetchCachedDataWithHandler:(CDUnknownBlockType)arg1 forToken:(id)arg2;
- (BOOL)isPaired;
- (void)requestDataInterval:(int)arg1 forToken:(struct NSNumber *)arg2;
- (void)requestComplicationDataUpdateForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)beginUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_updateServiceRegistration;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

