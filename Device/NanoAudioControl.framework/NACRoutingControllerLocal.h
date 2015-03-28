//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"
#import "NACRoutingController.h"

@class MPAVRoutingController, NACAudioRoute, NSArray, NSString;

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController>
{
    MPAVRoutingController *_routingController;
    NSString *_audioCategory;
    id <NACRoutingControllerDelegate> _delegate;
}

@property(readonly, nonatomic) NSArray *availableAudioRoutes;
- (void)pickAudioRoute:(id)arg1;
- (void)endObservingRoutes;
- (void)beginObservingRoutes;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NACRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithAudioCategory:(id)arg1;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
@property(readonly, nonatomic) NACAudioRoute *pickedRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

