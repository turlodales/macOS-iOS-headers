//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, _MKRouteETAFetcher;
@protocol MKAllRouteETAsManagerDelegate;

@interface MKAllRouteETAsManager : NSObject
{
    _MKRouteETAFetcher *_etaFetcher;
    id <MKAllRouteETAsManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKAllRouteETAsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateETA;
- (id)routeETAForTransportType:(unsigned long long)arg1;
@property(copy, nonatomic) GEOTransitOptions *transitOptions;
@property(copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(retain, nonatomic) MKMapItem *originMapItem;
@property(retain, nonatomic) MKMapItem *mapItem;
- (id)init;

@end

