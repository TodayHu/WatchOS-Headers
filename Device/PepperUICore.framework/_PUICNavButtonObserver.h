//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UINavigationController;

@interface _PUICNavButtonObserver : NSObject
{
    _Bool isObserving;
    UINavigationController *_currentNavController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UINavigationController *currentNavController; // @synthesize currentNavController=_currentNavController;
- (void)_navBackButtonPressed:(id)arg1;
- (void)_configureObserving;
- (void).cxx_destruct;

@end

