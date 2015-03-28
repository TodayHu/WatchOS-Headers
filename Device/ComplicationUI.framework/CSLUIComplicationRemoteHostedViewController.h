//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "CSLUIComplicationRemoteController.h"
#import "CSLUIComplicationViewControllerServing.h"

@class NSString;

@interface CSLUIComplicationRemoteHostedViewController : _UIRemoteViewController <CSLUIComplicationViewControllerServing, CSLUIComplicationRemoteController>
{
    BOOL _wantsCrownRotation;
    id <CSLUIComplicationViewControllerDelegate> _complicationDelegate;
    NSString *_complicationIdentifier;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) BOOL wantsCrownRotation; // @synthesize wantsCrownRotation=_wantsCrownRotation;
- (void)complicationDidCrash:(id)arg1;
- (void)complicationControllerDidFinishMoving:(id)arg1;
- (void)complicationController:(id)arg1 shouldMoveToTouch:(id)arg2;
- (void)enterEditingMode:(id)arg1;
- (void)zoomComplicationViewController:(id)arg1;
@property(retain, nonatomic) NSString *complicationIdentifier; // @synthesize complicationIdentifier=_complicationIdentifier;
@property(nonatomic) __weak id <CSLUIComplicationViewControllerDelegate> complicationDelegate; // @synthesize complicationDelegate=_complicationDelegate;
- (void)handleCrownPressUp:(int)arg1;
- (void)handleCrownPressDown:(int)arg1;
- (void)handleCrownRotateUp:(int)arg1;
- (void)handleCrownRotateDown:(int)arg1;
- (void)handleCrownPress:(int)arg1;
- (void)handleLongCrownPress:(int)arg1;
- (void)finishAnimationToState:(int)arg1;
- (void)animateToState:(int)arg1;
- (void)fadeForState:(int)arg1;
- (void)prepareToAnimateToState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)description;

@end

