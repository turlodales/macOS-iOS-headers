//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider
{
    MKMapItem *_sourceMapItem;
    unsigned long long _transportType;
}

@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) MKMapItem *sourceMapItem; // @synthesize sourceMapItem=_sourceMapItem;
- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *destinationMapItem;
- (id)activitySourceTitle;
- (id)activityURL;
- (id)initWithSource:(id)arg1 destination:(id)arg2;

@end

