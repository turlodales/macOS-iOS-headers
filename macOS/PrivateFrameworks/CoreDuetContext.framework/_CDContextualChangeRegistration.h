//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _mustWake;
    BOOL _isDeserialized;
    unsigned int _qualityOfService;
    NSString *_identifier;
    _CDContextualPredicate *_predicate;
    _CDContextualPredicate *_dismissalPolicy;
    CDUnknownBlockType _callback;
    unsigned long long _deviceSet;
    unsigned long long _deviceTypes;
    NSString *_clientIdentifier;
    NSString *_locationManagerEffectiveBundleID;
    NSString *_locationManagerEffectiveBundlePath;
    CDUnknownBlockType _informativeCallback;
}

+ (BOOL)supportsSecureCoding;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 qualityOfService:(unsigned int)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 qualityOfService:(unsigned int)arg7 callback:(CDUnknownBlockType)arg8;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 callback:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType informativeCallback; // @synthesize informativeCallback=_informativeCallback;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundlePath; // @synthesize locationManagerEffectiveBundlePath=_locationManagerEffectiveBundlePath;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundleID; // @synthesize locationManagerEffectiveBundleID=_locationManagerEffectiveBundleID;
@property(nonatomic) BOOL isDeserialized; // @synthesize isDeserialized=_isDeserialized;
@property(readonly, nonatomic) unsigned int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) BOOL mustWake; // @synthesize mustWake=_mustWake;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) unsigned long long deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(nonatomic) unsigned long long deviceSet; // @synthesize deviceSet=_deviceSet;
@property(readonly, copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) _CDContextualPredicate *dismissalPolicy; // @synthesize dismissalPolicy=_dismissalPolicy;
@property(retain, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isMultiDeviceRegistration;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 qualityOfService:(unsigned int)arg8 informativeCallback:(CDUnknownBlockType)arg9;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 callback:(CDUnknownBlockType)arg8;
- (id)init;

@end

