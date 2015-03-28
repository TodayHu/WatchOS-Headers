//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSSet;

@interface PUICStatusBarGlobalContextProperties : NSObject <NSSecureCoding>
{
    _Bool _timeHidden;
    _Bool _indicatorsHidden;
    unsigned long long _layoutBehavior;
    unsigned long long _overrideLayoutBehavior;
    NSSet *_suppressedIndicatorStates;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *suppressedIndicatorStates; // @synthesize suppressedIndicatorStates=_suppressedIndicatorStates;
@property(nonatomic) _Bool indicatorsHidden; // @synthesize indicatorsHidden=_indicatorsHidden;
@property(nonatomic) _Bool timeHidden; // @synthesize timeHidden=_timeHidden;
@property(nonatomic) unsigned long long overrideLayoutBehavior; // @synthesize overrideLayoutBehavior=_overrideLayoutBehavior;
@property(nonatomic) unsigned long long layoutBehavior; // @synthesize layoutBehavior=_layoutBehavior;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
