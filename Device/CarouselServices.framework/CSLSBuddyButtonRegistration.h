//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLSBuddyButtonRegistration : NSObject
{
    unsigned int _mask;
    unsigned int _event;
}

- (BOOL)matchesMask:(unsigned int)arg1 event:(unsigned int)arg2;
- (id)initWithMask:(unsigned int)arg1 event:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;

@end
