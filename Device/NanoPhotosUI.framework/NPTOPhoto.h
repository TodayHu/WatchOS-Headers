//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PHAsset, UIImage;

@interface NPTOPhoto : NSObject
{
    NSArray *_faceRegions;
    NSArray *_thumbnailFacesRegions;
    PHAsset *_asset;
    unsigned int _contentsIndex;
}

@property(readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property(nonatomic) unsigned int contentsIndex; // @synthesize contentsIndex=_contentsIndex;
@property(readonly, nonatomic) UIImage *eagerlyDecodedFullImage;
- (id)_fullImageData;
- (id)_imageWithFormat:(int)arg1;
@property(readonly, nonatomic) UIImage *fullImage; // @dynamic fullImage;
- (id)thumbnail:(int)arg1;
@property(readonly, nonatomic) NSArray *thumbnailFacesRegions; // @synthesize thumbnailFacesRegions=_thumbnailFacesRegions;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;

@end

