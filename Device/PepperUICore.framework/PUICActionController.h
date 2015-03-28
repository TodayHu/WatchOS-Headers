//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ORBTapGestureRecognizerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, ORBTapGestureRecognizer, PUICActionGroup, UIWindow;

@interface PUICActionController : NSObject <UIGestureRecognizerDelegate, ORBTapGestureRecognizerDelegate>
{
    ORBTapGestureRecognizer *_orbGestureRecognizer;
    float _progress;
    BOOL _isVisible;
    PUICActionGroup *_actionGroup;
    id <PUICActionControllerDelegate> _delegate;
    UIWindow *_actionWindow;
}

+ (void)ORBTapGestureRecognizerDidLatch:(id)arg1;
+ (id)_actionControllerOrbTapGestureRecognizer;
+ (void)_popActionControllerOrbGestureEnabled;
+ (void)_pushActionControllerOrbGestureEnabled:(BOOL)arg1 inWindow:(id)arg2;
+ (void)_setActionControllerOrbGestureEnabled:(BOOL)arg1 inWindow:(id)arg2;
+ (id)_currentActionController;
+ (void)_initializeSnapshotWindow;
+ (void)_initializeActionWindow;
+ (void)_initializeActionViewController;
+ (void)_orbGestureRecognized:(id)arg1;
+ (void)_setOrbGestureWindow:(id)arg1;
+ (void)dismissCurrentActionController;
+ (void)_beginPresentingActionController;
+ (void)dismissCurrentActionControllerAnimated:(BOOL)arg1;
+ (id)interactionControllerForDismissal:(id)arg1;
+ (id)animationControllerForDismissedController:(id)arg1;
+ (id)interactionControllerForPresentation:(id)arg1;
+ (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
+ (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
+ (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
+ (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
+ (BOOL)gestureRecognizerShouldBegin:(id)arg1;
+ (void)animateTransition:(id)arg1;
+ (double)transitionDuration:(id)arg1;
- (void)_dismissed:(CDUnknownBlockType)arg1;
- (void)_presented;
- (void)_deactivated;
- (void)_orbGestureDismiss:(id)arg1;
- (void)_addDismissGestureRecognizer;
- (void)ORBTapGestureRecognizerDidLatch:(id)arg1;
- (void)presentWithORBTapGestureRecognizer:(id)arg1;
- (void)_cleanupAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIWindow *actionWindow; // @synthesize actionWindow=_actionWindow;
- (id)initWithActionItems:(id)arg1;
- (void)_showActionsAnimated:(BOOL)arg1;
- (id)initWithActionGroup:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSArray *actionItems;
@property(retain, nonatomic) PUICActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
- (void).cxx_destruct;
- (void)present;
- (void)dismiss;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(nonatomic) __weak id <PUICActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

