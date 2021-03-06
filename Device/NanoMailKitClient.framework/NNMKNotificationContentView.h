//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CUISAlertHeaderViewDataSource.h"
#import "CUISAlertHeaderViewDelegate.h"
#import "CUISBulletinActionMenuDelegate.h"
#import "NNMKMessageContentViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class CUISAlertChevronView, CUISAlertHeaderView, CUISAlertPlatterView, CUISBulletinActionMenu, NNMKMessageContent, NNMKMessageContentView, NSString, PUICActivityIndicatorView, UIImage, UIScrollView;

@interface NNMKNotificationContentView : UIView <NNMKMessageContentViewDelegate, CUISAlertHeaderViewDataSource, CUISAlertHeaderViewDelegate, CUISBulletinActionMenuDelegate, UIScrollViewDelegate>
{
    BOOL _shouldArchive;
    BOOL _realIcon;
    BOOL _supportsMessageActions;
    BOOL _isDraggingQuickLook;
    BOOL _animateToLongLookAnimationPending;
    id <NNMKNotificationContentViewDelegate> _delegate;
    unsigned int _currentMessageStatus;
    NSString *_messageFrom;
    NSString *_messageSubject;
    CDUnknownBlockType _animateToLongLookAnimationCompletionBlock;
    CUISAlertHeaderView *_headerView;
    NNMKMessageContentView *_messageContentView;
    CUISAlertChevronView *_topChevronView;
    UIView *_backgroundPlatterContainer;
    CUISAlertPlatterView *_backgroundPlatter;
    CUISBulletinActionMenu *_actionMenu;
    UIScrollView *_backgroundScrollView;
    UIImage *_icon;
    PUICActivityIndicatorView *_loadingSpinner;
}

@property(retain, nonatomic) NNMKMessageContent *content;
- (id)crownInputSequencer;
@property(retain, nonatomic) PUICActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) CUISBulletinActionMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(retain, nonatomic) CUISAlertPlatterView *backgroundPlatter; // @synthesize backgroundPlatter=_backgroundPlatter;
@property(retain, nonatomic) UIView *backgroundPlatterContainer; // @synthesize backgroundPlatterContainer=_backgroundPlatterContainer;
@property(retain, nonatomic) CUISAlertChevronView *topChevronView; // @synthesize topChevronView=_topChevronView;
@property(retain, nonatomic) NNMKMessageContentView *messageContentView; // @synthesize messageContentView=_messageContentView;
@property(copy, nonatomic) CDUnknownBlockType animateToLongLookAnimationCompletionBlock; // @synthesize animateToLongLookAnimationCompletionBlock=_animateToLongLookAnimationCompletionBlock;
@property(nonatomic) BOOL animateToLongLookAnimationPending; // @synthesize animateToLongLookAnimationPending=_animateToLongLookAnimationPending;
@property(nonatomic) BOOL isDraggingQuickLook; // @synthesize isDraggingQuickLook=_isDraggingQuickLook;
@property(nonatomic) BOOL supportsMessageActions; // @synthesize supportsMessageActions=_supportsMessageActions;
@property(retain, nonatomic) NSString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property(retain, nonatomic) NSString *messageFrom; // @synthesize messageFrom=_messageFrom;
@property(readonly, nonatomic) BOOL realIcon; // @synthesize realIcon=_realIcon;
@property(nonatomic) unsigned int currentMessageStatus; // @synthesize currentMessageStatus=_currentMessageStatus;
- (void)_markMessageAsRead;
- (void)hideLoadingSpinner;
- (void)showLoadingSpinner;
- (void)animateDismissLongLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInLongLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPresentationMode:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2 realIcon:(BOOL)arg3;
- (void)didDismissBulletinActionMenu:(id)arg1;
- (void)bulletinActionMenu:(id)arg1 didSelectItem:(id)arg2;
- (void)didTapQuickLookTitleInHeaderView:(id)arg1;
- (void)didTapIconInHeaderView:(id)arg1;
- (id)longLookTitleColorForHeaderView:(id)arg1;
- (id)longLookTitleForHeaderView:(id)arg1;
- (id)iconForHeaderView:(id)arg1;
- (id)subtitleColorForHeaderView:(id)arg1;
- (id)subtitleForHeaderView:(id)arg1;
- (id)titleColorForHeaderView:(id)arg1;
- (id)titleForHeaderView:(id)arg1;
- (void)messageContentViewDidStopLoading:(id)arg1;
- (void)messageContentViewWillStartLoading:(id)arg1;
- (void)messageContentView:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)messageContentViewWillBeginDragging:(id)arg1;
- (void)messageContentView:(id)arg1 didEndScrollingAtYPosition:(float)arg2;
- (void)messageContentView:(id)arg1 didScrollToYPosition:(float)arg2;
- (void)messageContentView:(id)arg1 adjustedAttributedString:(id)arg2;
- (id)_actionItems;
- (BOOL)_draggedPastTopActionThreshold;
- (void)animateToLongLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleQuickLookDidEndScrolling;
- (void)_trashMessage;
- (void)_archiveMessage;
- (void)_flagMessage;
- (void)_unflagMessage;
- (void)_markMessageAsUnread;
- (void)_handleWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2 scrollView:(id)arg3;
- (void)_handleDidEndScrollingAtYPosition:(float)arg1;
- (void)_handleDidScrollToYPosition:(float)arg1;
@property(readonly, nonatomic) BOOL contentBeingDisplayed;
- (void)notifyContentDownloadFailure;
- (void)animateInQuickLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureHeaderViewAfterLongLookAnimation;
- (void)_configureContentViewsAfterLongLookAnimation;
- (void)_prepareAllViewsForLongLookAnimation;
- (void)_recreateActionMenu;
- (void)_handleMessageRenderedNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 messageFrom:(id)arg2 subject:(id)arg3 realIcon:(BOOL)arg4;
@property(nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
- (void)notifyImageAttachmentLoadedForContentId:(id)arg1;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) CUISAlertHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <NNMKNotificationContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

