//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@class MKMapView;

@protocol FMFMapOptionsViewControllerDelegate <NSObject>
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)_dismiss:(id)arg1;
- (void)openInMapsButtonTapped:(id)arg1;
- (MKMapView *)mapView;
@end

