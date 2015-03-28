//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSProtobuf.h"

@class PBCodable;

@interface BLTPBProtobuf : IDSProtobuf
{
    BOOL _hasSequenceNumber;
    BOOL _isInitialSequenceNumber;
    PBCodable *_protobuf;
    IDSProtobuf *_idsProtobuf;
    unsigned long long _sequenceNumber;
}

@property(retain, nonatomic) PBCodable *protobuf; // @synthesize protobuf=_protobuf;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL hasSequenceNumber; // @synthesize hasSequenceNumber=_hasSequenceNumber;
@property(retain, nonatomic) IDSProtobuf *idsProtobuf; // @synthesize idsProtobuf=_idsProtobuf;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumber:(unsigned long long)arg4 isInitialSequenceNumber:(BOOL)arg5;
@property(readonly, nonatomic) BOOL isInitialSequenceNumber; // @synthesize isInitialSequenceNumber=_isInitialSequenceNumber;
- (id)initWithIDSProtobuf:(id)arg1;
- (void).cxx_destruct;

@end

