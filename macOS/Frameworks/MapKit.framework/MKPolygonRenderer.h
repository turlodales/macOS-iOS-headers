//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon, VKVectorOverlayPolygonGroup;

@interface MKPolygonRenderer : MKOverlayPathRenderer
{
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
@property(readonly, nonatomic) MKPolygon *polygon;
- (id)initWithPolygon:(id)arg1;

@end

