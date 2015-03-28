//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSPointerArray;

@interface NRDevice : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_nrQueue;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSPointerArray *promiscuousObservers; // @synthesize promiscuousObservers=_promiscuousObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nrQueue; // @synthesize nrQueue=_nrQueue;
- (void)mergeWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(BOOL)arg3;
- (void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueMergeWithDevice:(id)arg1;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (BOOL)_queueSetValue:(id)arg1 forProperty:(id)arg2;
- (id)queueValueForProperty:(id)arg1;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)queueDescription;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
- (id)valueForProperty:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

