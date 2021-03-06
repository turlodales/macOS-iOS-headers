//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKRouteActivityProvider.h>

#import <MapKit/MKActivityItemLinkPresentationSource-Protocol.h>

@class GEOComposedRoute, NSString;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider <MKActivityItemLinkPresentationSource>
{
    GEOComposedRoute *_composedRoute;
}

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

