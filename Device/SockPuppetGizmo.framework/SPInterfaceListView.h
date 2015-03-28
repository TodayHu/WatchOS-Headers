//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"
#import "SPInterfaceActionItem.h"

@class NSBundle, NSDictionary, NSMutableArray, NSString, PUICTableView;

@interface SPInterfaceListView : UIView <PUICTableViewDataSource, PUICTableViewDelegate, SPInterfaceActionItem>
{
    BOOL _isUpdatingTable;
    BOOL _tableViewDidReload;
    BOOL _enabled;
    int _index;
    NSBundle *_bundle;
    NSString *_stringsFileName;
    int _interfaceAlignment;
    int _verticalInterfaceAlignment;
    NSDictionary *_listProperty;
    NSString *_actionValue;
    NSDictionary *_segueValue;
    float _width;
    float _height;
    NSDictionary *_rowDescriptions;
    NSDictionary *_rowProperties;
    NSMutableArray *_items;
    PUICTableView *_tableView;
    id _target;
    SEL _action;
    NSDictionary *_selectionSegue;
    NSMutableArray *_dirtyItems;
    NSMutableArray *_updatedIndexPaths;
    struct CGSize _fixedSize;
    struct CGSize _cachedTableViewContentSize;
}

@property(copy, nonatomic) NSDictionary *rowProperties; // @synthesize rowProperties=_rowProperties;
- (void)insertRowsAtIndexPaths:(id)arg1;
- (id)_createInterfaceItems:(id)arg1 property:(id)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1;
@property(nonatomic) BOOL tableViewDidReload; // @synthesize tableViewDidReload=_tableViewDidReload;
@property(retain, nonatomic) NSMutableArray *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
- (void)finalizeUpdatingTableAtRunLoopCompletion;
@property(nonatomic) BOOL isUpdatingTable; // @synthesize isUpdatingTable=_isUpdatingTable;
@property(retain, nonatomic) NSMutableArray *dirtyItems; // @synthesize dirtyItems=_dirtyItems;
- (void)beginUpdatingTableIfNecessary;
@property(copy, nonatomic) NSDictionary *selectionSegue; // @synthesize selectionSegue=_selectionSegue;
- (void)layoutInterfaceItem:(id)arg1;
- (struct CGSize)sizeForInterfaceItem:(id)arg1;
@property(copy, nonatomic) NSDictionary *listProperty; // @synthesize listProperty=_listProperty;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(copy, nonatomic) NSDictionary *segueValue; // @synthesize segueValue=_segueValue;
@property(nonatomic) struct CGSize cachedTableViewContentSize; // @synthesize cachedTableViewContentSize=_cachedTableViewContentSize;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;
- (void)contentSizeCategoryDidChange;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
- (id)interfaceAction;
@property(nonatomic) int verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) int interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
- (BOOL)hasIntrinsicHeight;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
- (BOOL)_setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (id)companionProperty;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)action:(id)arg1 value:(id)arg2;
- (void)setTarget:(id)arg1 forInterfaceItemAction:(SEL)arg2;
- (id)itemAtIndex:(int)arg1;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) float height; // @synthesize height=_height;
- (void).cxx_destruct;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) PUICTableView *tableView; // @synthesize tableView=_tableView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) id target; // @synthesize target=_target;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

