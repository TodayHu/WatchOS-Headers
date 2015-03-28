//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin, NSArray, NSString, UIImage, UITableViewCell;

@protocol CUISNotificationCenterCellFactory <NSObject>
@property(readonly, nonatomic) NSArray *supportedSectionIDs;
@property(nonatomic) __weak id <CUISNotificationCenterCellFactoryDelegate> delegate;
- (NSString *)reuseIdentifierForBulletin:(BBBulletin *)arg1;
- (BOOL)willProvideCellForBulletin:(BBBulletin *)arg1;
- (float)heightForCellDisplayingBulletin:(BBBulletin *)arg1;
- (void)configureCell:(UITableViewCell *)arg1 withBulletin:(BBBulletin *)arg2 appName:(NSString *)arg3 icon:(UIImage *)arg4;
- (UITableViewCell *)newCellForBulletin:(BBBulletin *)arg1;

@optional
- (void)configureCell:(UITableViewCell *)arg1 withBulletin:(BBBulletin *)arg2 appName:(NSString *)arg3 icon:(UIImage *)arg4 iconStyle:(unsigned int)arg5;
- (BOOL)willReconfigureCellWhenModifyingBulletin:(BBBulletin *)arg1 withBulletin:(BBBulletin *)arg2;
- (unsigned int)iconStyleForBulletin:(BBBulletin *)arg1;
@end

