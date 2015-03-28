//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSString *_displayName;
    BOOL _shouldArchive;
    struct {
        unsigned int shouldArchive:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasShouldArchive;
@property(nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(readonly, nonatomic) BOOL hasAccountId;
@property(readonly, nonatomic) BOOL hasDisplayName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

