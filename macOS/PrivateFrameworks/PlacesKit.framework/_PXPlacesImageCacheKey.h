//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject
{
    id <PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)geotaggable;
- (id)initWithGeotaggable:(id)arg1 andKey:(id)arg2;

@end

