//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface NMUNowPlayingArtworkView : UIView
{
    UIImageView *_unprocessedArtworkImageView;
    UIImageView *_processedArtworkImageView;
    UIView *_dimmingView;
    BOOL _dimmed;
    BOOL _unprocessedArtworkImageVisible;
    UIImage *_unprocessedArtworkImage;
    UIImage *_processedArtworkImage;
}

@property(copy, nonatomic) UIImage *processedArtworkImage; // @synthesize processedArtworkImage=_processedArtworkImage;
@property(copy, nonatomic) UIImage *unprocessedArtworkImage; // @synthesize unprocessedArtworkImage=_unprocessedArtworkImage;
@property(nonatomic, getter=isUnprocessedArtworkImageVisible) BOOL unprocessedArtworkImageVisible; // @synthesize unprocessedArtworkImageVisible=_unprocessedArtworkImageVisible;
- (void)_setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_imageCrossFadeTransition;
- (void)setUnprocessedArtworkImageVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

