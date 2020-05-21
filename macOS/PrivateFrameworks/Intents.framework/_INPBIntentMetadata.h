//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INJSONSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentMetadata.h"

@class NSArray, NSString, _INPBImageValue, _INPBString;

@interface _INPBIntentMetadata : PBCodable <INJSONSerializable, _INPBIntentMetadata, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int executionContext:1;
        unsigned int intentCategory:1;
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
        unsigned int idiom:1;
        unsigned int isOwnedByCurrentUser:1;
        unsigned int isPrimaryDisplayDisabled:1;
        unsigned int triggerMethod:1;
        unsigned int userConfirmationRequired:1;
    } _has;
    BOOL _backgroundLaunch;
    BOOL _confirmed;
    BOOL _isOwnedByCurrentUser;
    BOOL _isPrimaryDisplayDisabled;
    BOOL _userConfirmationRequired;
    BOOL __encodeLegacyGloryData;
    int _executionContext;
    int _intentCategory;
    int _idiom;
    int _triggerMethod;
    NSString *_categoryVerb;
    _INPBImageValue *_defaultImageValue;
    NSString *_launchId;
    NSString *_nanoLaunchId;
    NSString *_systemExtensionBundleId;
    NSString *_systemUIExtensionBundleId;
    NSArray *_forceNeedsValueForParameters;
    NSString *_intentDescription;
    NSString *_intentId;
    NSString *_originatingDeviceIdsIdentifier;
    NSString *_originatingDeviceRapportEffectiveId;
    NSString *_originatingDeviceRapportMediaSystemId;
    NSArray *_parameterImages;
    NSString *_suggestedInvocationPhrase;
    _INPBString *_userUtterance;
}

+ (BOOL)supportsSecureCoding;
+ (Class)parameterImagesType;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;
@property(nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(nonatomic) int triggerMethod; // @synthesize triggerMethod=_triggerMethod;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase; // @synthesize suggestedInvocationPhrase=_suggestedInvocationPhrase;
@property(copy, nonatomic) NSArray *parameterImages; // @synthesize parameterImages=_parameterImages;
@property(copy, nonatomic) NSString *originatingDeviceRapportMediaSystemId; // @synthesize originatingDeviceRapportMediaSystemId=_originatingDeviceRapportMediaSystemId;
@property(copy, nonatomic) NSString *originatingDeviceRapportEffectiveId; // @synthesize originatingDeviceRapportEffectiveId=_originatingDeviceRapportEffectiveId;
@property(copy, nonatomic) NSString *originatingDeviceIdsIdentifier; // @synthesize originatingDeviceIdsIdentifier=_originatingDeviceIdsIdentifier;
@property(nonatomic) BOOL isPrimaryDisplayDisabled; // @synthesize isPrimaryDisplayDisabled=_isPrimaryDisplayDisabled;
@property(nonatomic) BOOL isOwnedByCurrentUser; // @synthesize isOwnedByCurrentUser=_isOwnedByCurrentUser;
@property(copy, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property(copy, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSArray *forceNeedsValueForParameters; // @synthesize forceNeedsValueForParameters=_forceNeedsValueForParameters;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic) BOOL backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property(copy, nonatomic) NSString *systemUIExtensionBundleId; // @synthesize systemUIExtensionBundleId=_systemUIExtensionBundleId;
@property(copy, nonatomic) NSString *systemExtensionBundleId; // @synthesize systemExtensionBundleId=_systemExtensionBundleId;
@property(copy, nonatomic) NSString *nanoLaunchId; // @synthesize nanoLaunchId=_nanoLaunchId;
@property(copy, nonatomic) NSString *launchId; // @synthesize launchId=_launchId;
@property(nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property(nonatomic) int executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) _INPBImageValue *defaultImageValue; // @synthesize defaultImageValue=_defaultImageValue;
@property(copy, nonatomic) NSString *categoryVerb; // @synthesize categoryVerb=_categoryVerb;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasUserUtterance;
@property(nonatomic) BOOL hasUserConfirmationRequired;
- (int)StringAsTriggerMethod:(id)arg1;
- (id)triggerMethodAsString:(int)arg1;
@property(nonatomic) BOOL hasTriggerMethod;
@property(readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long parameterImagesCount;
- (void)addParameterImages:(id)arg1;
- (void)clearParameterImages;
@property(readonly, nonatomic) BOOL hasOriginatingDeviceRapportMediaSystemId;
@property(readonly, nonatomic) BOOL hasOriginatingDeviceRapportEffectiveId;
@property(readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property(nonatomic) BOOL hasIsPrimaryDisplayDisabled;
@property(nonatomic) BOOL hasIsOwnedByCurrentUser;
@property(readonly, nonatomic) BOOL hasIntentId;
@property(readonly, nonatomic) BOOL hasIntentDescription;
- (int)StringAsIdiom:(id)arg1;
- (id)idiomAsString:(int)arg1;
@property(nonatomic) BOOL hasIdiom;
- (id)forceNeedsValueForParameterAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long forceNeedsValueForParametersCount;
- (void)addForceNeedsValueForParameter:(id)arg1;
- (void)clearForceNeedsValueForParameters;
@property(nonatomic) BOOL hasConfirmed;
@property(nonatomic) BOOL hasBackgroundLaunch;
@property(readonly, nonatomic) BOOL hasSystemUIExtensionBundleId;
@property(readonly, nonatomic) BOOL hasSystemExtensionBundleId;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@property(readonly, nonatomic) int *requiredEntitlements;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasNanoLaunchId;
@property(readonly, nonatomic) BOOL hasLaunchId;
- (int)StringAsIntentCategory:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
@property(nonatomic) BOOL hasIntentCategory;
- (int)StringAsExecutionContext:(id)arg1;
- (id)executionContextAsString:(int)arg1;
@property(nonatomic) BOOL hasExecutionContext;
@property(readonly, nonatomic) BOOL hasDefaultImageValue;
@property(readonly, nonatomic) BOOL hasCategoryVerb;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

