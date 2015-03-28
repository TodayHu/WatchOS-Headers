//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutManager, NSTextAttachment, NSTextContainer, UIView;

@protocol NSTextAttachmentCell <NSObject>
- (NSTextAttachment *)attachment;
- (void)setAttachment:(NSTextAttachment *)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned int)arg3 layoutManager:(NSLayoutManager *)arg4;

@optional
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned int)arg3;
- (struct CGRect)cellFrameForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned int)arg4;
@end

