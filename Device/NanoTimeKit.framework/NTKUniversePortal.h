//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTKUniverseScene;

@interface NTKUniversePortal : NSObject
{
    NTKUniverseScene *_scene;
    struct NTKUniverseViewport _viewport;
}

@property(nonatomic) struct NTKUniverseViewport viewport; // @synthesize viewport=_viewport;
- (void)setFrame:(struct CGRect)arg1 boundSize:(struct CGSize)arg2 contentScaleFactor:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1 boundSize:(struct CGSize)arg2 contentScaleFactor:(float)arg3;
- (void).cxx_destruct;
- (struct CGRect)frame;
@property(retain, nonatomic) NTKUniverseScene *scene; // @synthesize scene=_scene;

@end

