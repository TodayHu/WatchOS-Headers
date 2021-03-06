//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ElectricTouch/ETPointFIFO.h>

@interface ETQuadCurvePointFIFO : ETPointFIFO
{
    BOOL _emitInterpolatedPoints;
    float _unitSize;
    CDUnknownBlockType _emissionHandler;
    // Error parsing type: , name: _lastPoint
    vector_761af77e _prevPoints;
    vector_761af77e _points;
    vector_761af77e _controlPoints;
}

@property(nonatomic) vector_b97278d5 points; // @synthesize points=_points;
@property(nonatomic) vector_b97278d5 controlPoints; // @synthesize controlPoints=_controlPoints;
// Error parsing type for property lastPoint:
// Property attributes: T,N,V_lastPoint

@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) BOOL emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitSize; // @synthesize unitSize=_unitSize;
-     // Error parsing type: v16@0:4^8L12, name: addPoints:count:
@property(nonatomic) vector_b97278d5 prevPoints; // @synthesize prevPoints=_prevPoints;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)arg1;
- (void)clear;
- (id).cxx_construct;
- (void)flush;

@end

