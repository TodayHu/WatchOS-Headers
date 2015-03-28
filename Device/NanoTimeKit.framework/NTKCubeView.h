//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary;

@interface NTKCubeView : UIView
{
    NSMutableDictionary *_faceViews;
    float _depth;
    unsigned int _cubeLayout;
}

+ (Class)layerClass;
@property(nonatomic) unsigned int cubeLayout; // @synthesize cubeLayout=_cubeLayout;
@property(nonatomic) float depth; // @synthesize depth=_depth;
- (void)setView:(id)arg1 forFace:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 depth:(float)arg2;
- (struct CATransform3D)_transformForFace:(unsigned int)arg1;
- (struct CGRect)_boundsForFace:(unsigned int)arg1;
- (id)viewForFace:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

