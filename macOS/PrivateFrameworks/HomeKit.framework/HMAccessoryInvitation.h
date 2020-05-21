//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMAccessory, NSString, NSUUID;

@interface HMAccessoryInvitation : NSObject <NSSecureCoding, HMObjectMerge>
{
    NSUUID *_identifier;
    HMAccessory *_accessory;
    long long _state;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

