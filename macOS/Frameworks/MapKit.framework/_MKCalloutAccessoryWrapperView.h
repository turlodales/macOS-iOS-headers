//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MapKit/_MKCalloutAccessoryView-Protocol.h>

@class NSString;
@protocol _MKCalloutAccessoryView;

__attribute__((visibility("hidden")))
@interface _MKCalloutAccessoryWrapperView : NSView <_MKCalloutAccessoryView>
{
    NSView<_MKCalloutAccessoryView> *_view;
}

- (void).cxx_destruct;
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (struct CGSize)intrinsicContentSize;
- (id)initWithView:(id)arg1;
- (BOOL)isFlipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

