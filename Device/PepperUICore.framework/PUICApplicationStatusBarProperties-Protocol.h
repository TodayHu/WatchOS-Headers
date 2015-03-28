//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont, UIImage, UIView;

@protocol PUICApplicationStatusBarProperties <NSObject>
@property(retain, nonatomic) UIImage *navigationImage;
@property(nonatomic) _Bool navUIBackButtonDisabled;
@property(nonatomic) _Bool showNavigationUI;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIView *titleAccessoryView;
@property(nonatomic, getter=isTitleInteractive) _Bool titleInteractive;
@property(nonatomic) float titleBaseLine;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *title;
@end

