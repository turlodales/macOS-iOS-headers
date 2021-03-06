//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class CLRegion, HMFLocationAuthorization;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    int _locationAuthorization;
    CLRegion *_region;
    HMFLocationAuthorization *_authorization;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(readonly) HMFLocationAuthorization *authorization; // @synthesize authorization=_authorization;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)__locationAuthorizationUpdated:(id)arg1;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_retrieveLocationEvent;
- (void)_updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (void)dealloc;
- (id)initWithDict:(id)arg1 region:(id)arg2;
- (id)initWithRegion:(id)arg1;

@end

