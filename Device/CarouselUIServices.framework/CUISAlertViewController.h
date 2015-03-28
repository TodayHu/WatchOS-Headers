//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CUISAlertPlatterBackgroundContainer.h"

@class CUISAlertBackground, NSString;

@interface CUISAlertViewController : UIViewController <CUISAlertPlatterBackgroundContainer>
{
    BOOL _hasBeenDisplayed;
    BOOL _hasBeenDisplayedWhileBacklightOn;
    BOOL _hiddenByBacklightTimeout;
    BOOL _viewHasDisappeared;
    BOOL _activated;
    BOOL _suppressed;
    BOOL _consumeAllTouches;
    unsigned int _priority;
    NSString *_alertServiceName;
    CUISAlertBackground *_background;
}

@property(nonatomic) BOOL consumeAllTouches; // @synthesize consumeAllTouches=_consumeAllTouches;
@property(readonly, nonatomic, getter=isSuppressed) BOOL suppressed; // @synthesize suppressed=_suppressed;
- (void)setSuppressed:(BOOL)arg1;
- (void)willBeDismissedByBacklight;
- (BOOL)allowAutoDismissByCoverGesture;
- (void)willBeDismissedByCrownPress;
- (BOOL)shouldAnimatedDismissalRunSimultaneouslyWithAppLaunch;
- (id)animationControllerForDismissal;
- (id)animationControllerForPresentation;
- (BOOL)hasBeenDisplayedWhileBacklightOn;
- (void)setHasBeenDisplayedWhileBacklightOn:(BOOL)arg1;
- (void)setAlertServiceName:(id)arg1;
- (id)initWithPrivatePriority:(unsigned int)arg1 serviceName:(id)arg2;
- (id)initWithPrivatePriority:(unsigned int)arg1;
- (void)suppressionStateDidChange;
@property(readonly, nonatomic) NSString *alertServiceName; // @synthesize alertServiceName=_alertServiceName;
- (id)backgroundSourceForAlertPlatterView:(id)arg1;
- (void)backgroundDidChange;
- (unsigned int)allowedAudioFeedbackByOtherAlerts;
- (BOOL)allowAutoDismissAfterBacklightOff;
- (BOOL)allowsCrownButtonDismissal;
- (id)initWithPriority:(unsigned int)arg1 serviceName:(id)arg2;
- (id)alertSuppressionContexts;
- (id)initWithPriority:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (void)setActivated:(BOOL)arg1;
@property(readonly, nonatomic) BOOL activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) CUISAlertBackground *background; // @synthesize background=_background;
- (void)setPriority:(unsigned int)arg1;
- (void)activate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)deactivate;
@property(readonly, copy) NSString *description;
- (id)init;
- (BOOL)hasBeenDisplayed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
