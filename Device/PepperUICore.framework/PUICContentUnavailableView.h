//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel, UIScrollView;

@interface PUICContentUnavailableView : UIView
{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_initializeFonts;
- (void)_initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

