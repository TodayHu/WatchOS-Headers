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
    BOOL _timeHidden;
    BOOL _indicatorsHidden;
    unsigned int _layoutBehavior;
    unsigned int _overrideLayoutBehavior;
    NSSet *_suppressedIndicatorStates;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL indicatorsHidden; // @synthesize indicatorsHidden=_indicatorsHidden;
@property(nonatomic) BOOL timeHidden; // @synthesize timeHidden=_timeHidden;
@property(nonatomic) unsigned int overrideLayoutBehavior; // @synthesize overrideLayoutBehavior=_overrideLayoutBehavior;
@property(retain, nonatomic) NSSet *suppressedIndicatorStates; // @synthesize suppressedIndicatorStates=_suppressedIndicatorStates;
@property(nonatomic) unsigned int layoutBehavior; // @synthesize layoutBehavior=_layoutBehavior;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

