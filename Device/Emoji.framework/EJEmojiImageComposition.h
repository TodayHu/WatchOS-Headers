//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Emoji/EJEmojiImage.h>

@class NSMutableArray, UIImage;

@interface EJEmojiImageComposition : EJEmojiImage
{
    NSMutableArray *_emojiImagesToCompose;
    UIImage *_cachedImageComposition;
    struct CGSize _sizeOfComposition;
}

- (void)addEmojiImage:(id)arg1;
- (void).cxx_destruct;
- (id)image;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setImage:(id)arg1;

@end

