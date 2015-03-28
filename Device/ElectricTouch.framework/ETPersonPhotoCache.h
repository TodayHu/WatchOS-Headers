//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface ETPersonPhotoCache : NSObject <NSCacheDelegate>
{
    NSSet *_allImageDiameters;
    NSObject<OS_dispatch_queue> *_generationQueue;
    unsigned int _generationQueueSuspendCount;
    BOOL _cacheFlushQueued;
    NSCache *_photoCache;
    void *_addressBook;
}

+ (id)sharedInstance;
- (void)_postChangeNotification;
- (void)addressBookChanged;
- (id)photoForPerson:(id)arg1 ofDiameter:(float)arg2 synchronously:(BOOL)arg3;
- (void)resumeLoadingResources;
- (void)pauseLoadingResources;
- (id)_imageDictionaryForABID:(int)arg1 diameter:(float)arg2;
- (void)_postChangeNotificationForRecordID:(int)arg1 diameter:(float)arg2 evicted:(BOOL)arg3;
- (void)_setImage:(id)arg1 forABID:(int)arg2 diameter:(float)arg3;
- (void)_setDirty:(BOOL)arg1 forABID:(int)arg2 diameter:(float)arg3;
- (void)_storePhotoAndNotify:(id)arg1 forRecordID:(int)arg2 diameter:(float)arg3;
- (id)_imageForPerson:(void *)arg1 diameter:(float)arg2;
- (id)_synchronousPhotoForRecordID:(int)arg1 forDiameter:(float)arg2;
- (id)_imageForABID:(int)arg1 diameter:(float)arg2 isDirty:(char *)arg3;
- (void)_loadPhotoForPerson:(id)arg1 forDiameter:(float)arg2;
- (void)prepopulateWithFriends:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

