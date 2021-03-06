//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUICAutoreversingClientSideAnimation, UIView<NTKKeylineView>, _KeylineLabel;

@interface _KeylineContainerView : UIView
{
    PUICAutoreversingClientSideAnimation *_breathingAnimation;
    UIView<NTKKeylineView> *_keylineView;
    _KeylineLabel *_label;
    unsigned int _labelAlignment;
    struct CGRect _selectedFrame;
    struct CGRect _deselectedFrame;
}

- (void)startBreathingWithApplier:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIView<NTKKeylineView> *keylineView; // @synthesize keylineView=_keylineView;
- (void)stopBreathingWithUrgency:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned int labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(nonatomic) struct CGRect deselectedFrame; // @synthesize deselectedFrame=_deselectedFrame;
@property(nonatomic) struct CGRect selectedFrame; // @synthesize selectedFrame=_selectedFrame;
- (void).cxx_destruct;
@property(retain, nonatomic) _KeylineLabel *label; // @synthesize label=_label;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

