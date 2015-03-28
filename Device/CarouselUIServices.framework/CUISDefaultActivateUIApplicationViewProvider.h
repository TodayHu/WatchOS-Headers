//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUISActivateUIApplicationViewProvider.h"

@class NSString;

@interface CUISDefaultActivateUIApplicationViewProvider : NSObject <CUISActivateUIApplicationViewProvider>
{
    id <CUISActivateUIApplicationViewProviderDelegate> _delegate;
}

- (id)activateViewForBundleID:(id)arg1 forOrientation:(int)arg2;
- (id)bundleIdentifiersSupportedForActivation;
- (id)_getStatusImageViewForBundleID:(id)arg1;
- (void)handleStatusBarForView:(id)arg1 forBundleID:(id)arg2 forOrientation:(int)arg3;
- (void)handleActivityIndicatorForView:(id)arg1 forBundleID:(id)arg2 forOrientation:(int)arg3;
- (void)handleActivateImageForView:(id)arg1 forBundleID:(id)arg2 forOrientation:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CUISActivateUIApplicationViewProviderDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
