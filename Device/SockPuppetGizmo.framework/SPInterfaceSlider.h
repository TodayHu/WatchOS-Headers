//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICSlider.h"

#import "SPInterfaceActionItem.h"

@class NSBundle, NSDictionary, NSString;

@interface SPInterfaceSlider : PUICSlider <SPInterfaceActionItem>
{
    NSBundle *_bundle;
    NSString *_stringsFileName;
    NSDictionary *_companionProperty;
    int _interfaceAlignment;
    int _verticalInterfaceAlignment;
    NSString *_interfaceAction;
    float _width;
    float _widthAdjustment;
    float _height;
    float _heightAdjustment;
    id _target;
    SEL _action;
    struct CGSize _fixedSize;
    struct CGSize _cachedContainerSize;
    struct CGSize _cachedSize;
}

@property(nonatomic) struct CGSize cachedContainerSize; // @synthesize cachedContainerSize=_cachedContainerSize;
@property(nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
- (void)doSlider;
@property(copy, nonatomic) NSString *interfaceAction; // @synthesize interfaceAction=_interfaceAction;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) int verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) int interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
- (BOOL)hasIntrinsicHeight;
@property(nonatomic) float widthAdjustment; // @synthesize widthAdjustment=_widthAdjustment;
@property(nonatomic) float heightAdjustment; // @synthesize heightAdjustment=_heightAdjustment;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(copy, nonatomic) NSDictionary *companionProperty; // @synthesize companionProperty=_companionProperty;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)setTarget:(id)arg1 forInterfaceItemAction:(SEL)arg2;
@property(nonatomic) float height; // @synthesize height=_height;
- (void).cxx_destruct;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

