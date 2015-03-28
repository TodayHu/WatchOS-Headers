//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMSObfuscatableDescriptionProviding.h"

@class NMSMessageCenter, NMSOutgoingResponse, NSData, NSString;

@interface NMSIncomingRequest : NSObject <NMSObfuscatableDescriptionProviding>
{
    BOOL _expectsResponse;
    unsigned short _messageID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned int _priority;
    NMSOutgoingResponse *_response;
    id _pbRequest;
}

+ (void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg1;
+ (BOOL)allowsUnrepliedRequestsForUnitTesting;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NMSOutgoingResponse *response; // @synthesize response=_response;
- (void)configureResponse;
@property(nonatomic) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
- (id)CPObfuscatedDescriptionObject;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

