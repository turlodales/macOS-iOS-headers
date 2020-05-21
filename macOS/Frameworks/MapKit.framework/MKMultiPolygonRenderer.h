//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKOverlayPathRenderer.h>

@class MKMultiPolygon, VKVectorOverlayPolygonGroup;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer
{
    const struct CGPath **_paths;
    unsigned long long _pathsCount;
    VKVectorOverlayPolygonGroup *_vectorData;
}

+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (void)_updateRenderColors;
- (id)vectorDataForOverlay:(id)arg1;
- (BOOL)overlayCanProvideVectorData:(id)arg1;
- (id)_vectorGeometry;
- (BOOL)_canProvideVectorGeometry;
- (void)setAlpha:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)createPath;
@property(readonly, nonatomic) MKMultiPolygon *multiPolygon;
- (void)dealloc;
- (id)initWithMultiPolygon:(id)arg1;

@end

