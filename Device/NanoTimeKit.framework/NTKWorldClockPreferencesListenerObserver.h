//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface NTKWorldClockPreferencesListenerObserver : NSObject
{
    NSOperationQueue *_queue;
    CDUnknownBlockType _block;
}

- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

