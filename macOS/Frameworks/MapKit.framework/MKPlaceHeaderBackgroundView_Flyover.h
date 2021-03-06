//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class GEOPDFlyover, MKMapView;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    BOOL _animationPaused;
    BOOL _animationPrepared;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}

- (void)setFlyover:(id)arg1;
- (id)flyover;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)_pauseTour;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;

@end

