//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    BOOL __wasFoundInLastUpdate;
    unsigned long long _identifier;
    NSSet *_components;
}

- (void).cxx_destruct;
@property BOOL _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property(retain) NSSet *components; // @synthesize components=_components;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (_Bool)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (_Bool)requestedSourceNameForAnyComponent;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

