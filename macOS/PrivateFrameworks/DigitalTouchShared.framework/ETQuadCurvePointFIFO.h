//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETQuadCurvePointFIFO : ETPointFIFO
{
    BOOL _emitInterpolatedPoints;
    float _unitSize;
    CDUnknownBlockType _emissionHandler;
    // Error parsing type: , name: _lastPoint
    vector_e654105b _prevPoints;
    vector_e654105b _points;
    vector_e654105b _controlPoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
// Error parsing type for property lastPoint:
// Property attributes: T,N,V_lastPoint

@property(nonatomic) vector_80ea899f controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) vector_80ea899f points; // @synthesize points=_points;
@property(nonatomic) vector_80ea899f prevPoints; // @synthesize prevPoints=_prevPoints;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) BOOL emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitSize; // @synthesize unitSize=_unitSize;
- (void)clear;
- (void)flush;
-     // Error parsing type: v32@0:8^16Q24, name: addPoints:count:
- (id)initWithFIFO:(id)arg1;

@end

