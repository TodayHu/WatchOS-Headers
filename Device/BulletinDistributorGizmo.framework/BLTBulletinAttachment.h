//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface BLTBulletinAttachment : NSObject
{
    NSData *_attachmentData;
    int _attachmentType;
}

@property(retain, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
- (id)initWithAttachmentData:(id)arg1 type:(int)arg2;
@property(nonatomic) int attachmentType; // @synthesize attachmentType=_attachmentType;
- (void).cxx_destruct;

@end
