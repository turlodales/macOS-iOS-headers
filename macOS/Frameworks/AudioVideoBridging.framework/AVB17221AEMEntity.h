//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMModelObject.h>

#import "NSCopying.h"

@class AVB17221AEMConfiguration, AVB17221AEMLocalizedStringReference, NSArray, NSString;

@interface AVB17221AEMEntity : AVB17221AEMModelObject <NSCopying>
{
    unsigned short talkerStreamSources;
    unsigned short talkerCapabilities;
    unsigned short listenerStreamSinks;
    unsigned short listenerCapabilities;
    unsigned short configurationsCount;
    unsigned short currentConfiguration;
    unsigned int entityCapabilities;
    unsigned int controllerCapabilities;
    unsigned int availableIndex;
    unsigned long long entityID;
    unsigned long long entityModelID;
    unsigned long long associationID;
    NSString *entityName;
    AVB17221AEMLocalizedStringReference *vendorNameString;
    AVB17221AEMLocalizedStringReference *modelNameString;
    NSString *firmwareVersion;
    NSString *groupName;
    NSString *serialNumber;
    NSArray *configurations;
}

+ (id)keyPathsForValuesAffectingDynamicEntityModelID;
+ (id)keyPathsForValuesAffectingDynamicEntityID;
+ (id)keyPathsForValuesAffectingLocalizedModelName;
+ (id)keyPathsForValuesAffectingLocalizedVendorName;
+ (id)keyPathsForValuesAffectingControllerImplemented;
+ (id)keyPathsForValuesAffectingVideoSink;
+ (id)keyPathsForValuesAffectingAudioSink;
+ (id)keyPathsForValuesAffectingMidiSink;
+ (id)keyPathsForValuesAffectingSmpteSink;
+ (id)keyPathsForValuesAffectingMediaClockSink;
+ (id)keyPathsForValuesAffectingControlSink;
+ (id)keyPathsForValuesAffectingOtherSink;
+ (id)keyPathsForValuesAffectingListenerImplemented;
+ (id)keyPathsForValuesAffectingVideoSource;
+ (id)keyPathsForValuesAffectingAudioSource;
+ (id)keyPathsForValuesAffectingMidiSource;
+ (id)keyPathsForValuesAffectingSmpteSource;
+ (id)keyPathsForValuesAffectingMediaClockSource;
+ (id)keyPathsForValuesAffectingControlSource;
+ (id)keyPathsForValuesAffectingOtherSource;
+ (id)keyPathsForValuesAffectingTalkerImplemented;
+ (id)keyPathsForValuesAffectingEntityNotReady;
+ (id)keyPathsForValuesAffectingGeneralControllerIgnore;
+ (id)keyPathsForValuesAffectingInterfaceIndexValid;
+ (id)keyPathsForValuesAffectingIdentifyControlIndexValid;
+ (id)keyPathsForValuesAffectingPersistentAcquireSupported;
+ (id)keyPathsForValuesAffectingAuthenticationRequired;
+ (id)keyPathsForValuesAffectingAuthenticationSupported;
+ (id)keyPathsForValuesAffectingGPTPSupported;
+ (id)keyPathsForValuesAffectingClassBSupported;
+ (id)keyPathsForValuesAffectingClassASupported;
+ (id)keyPathsForValuesAffectingVendorUniqueSupported;
+ (id)keyPathsForValuesAffectingAssociationIDValid;
+ (id)keyPathsForValuesAffectingAssociationIDSupported;
+ (id)keyPathsForValuesAffectingLegacyAVCSupported;
+ (id)keyPathsForValuesAffectingAemSupported;
+ (id)keyPathsForValuesAffectingGatewayEntity;
+ (id)keyPathsForValuesAffectingAddressAccessSupported;
+ (id)keyPathsForValuesAffectingEfuMode;
+ (id)keyPathsForValuesAffectingLocalizedModelObjectName;
+ (id)entityWithAVBEntity:(id)arg1 onInterface:(id)arg2 withControllerEntityID:(unsigned long long)arg3;
@property(copy) NSArray *configurations; // @synthesize configurations;
@property unsigned short currentConfiguration; // @synthesize currentConfiguration;
@property unsigned short configurationsCount; // @synthesize configurationsCount;
@property(copy) NSString *serialNumber; // @synthesize serialNumber;
@property(copy) NSString *groupName; // @synthesize groupName;
@property(copy) NSString *firmwareVersion; // @synthesize firmwareVersion;
@property(copy) AVB17221AEMLocalizedStringReference *modelNameString; // @synthesize modelNameString;
@property(copy) AVB17221AEMLocalizedStringReference *vendorNameString; // @synthesize vendorNameString;
@property(copy) NSString *entityName; // @synthesize entityName;
@property unsigned long long associationID; // @synthesize associationID;
@property unsigned int availableIndex; // @synthesize availableIndex;
@property unsigned int controllerCapabilities; // @synthesize controllerCapabilities;
@property unsigned short listenerCapabilities; // @synthesize listenerCapabilities;
@property unsigned short listenerStreamSinks; // @synthesize listenerStreamSinks;
@property unsigned short talkerCapabilities; // @synthesize talkerCapabilities;
@property unsigned short talkerStreamSources; // @synthesize talkerStreamSources;
@property unsigned int entityCapabilities; // @synthesize entityCapabilities;
@property unsigned long long entityModelID; // @synthesize entityModelID;
@property unsigned long long entityID; // @synthesize entityID;
- (void)dealloc;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)description;
@property(readonly) AVB17221AEMConfiguration *currentConfigurationObject; // @dynamic currentConfigurationObject;
- (id)objectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3;
@property(readonly, getter=isDynamicEntityModelID) BOOL dynamicEntityModelID;
@property(readonly, getter=isDynamicEntityID) BOOL dynamicEntityID;
- (id)localizedModelNameForLanguages:(id)arg1;
@property(readonly) NSString *localizedModelName;
- (id)localizedVendorNameForLanguages:(id)arg1;
@property(readonly) NSString *localizedVendorName;
@property(getter=isControllerImplemented) BOOL controllerImplemented; // @dynamic controllerImplemented;
@property(getter=isVideoSink) BOOL videoSink; // @dynamic videoSink;
@property(getter=isAudioSink) BOOL audioSink; // @dynamic audioSink;
@property(getter=isMidiSink) BOOL midiSink; // @dynamic midiSink;
@property(getter=isSmpteSink) BOOL smpteSink; // @dynamic smpteSink;
@property(getter=isMediaClockSink) BOOL mediaClockSink; // @dynamic mediaClockSink;
@property(getter=isControlSink) BOOL controlSink; // @dynamic controlSink;
@property(getter=isOtherSink) BOOL otherSink; // @dynamic otherSink;
@property(getter=isListenerImplemented) BOOL listenerImplemented; // @dynamic listenerImplemented;
@property(getter=isVideoSource) BOOL videoSource; // @dynamic videoSource;
@property(getter=isAudioSource) BOOL audioSource; // @dynamic audioSource;
@property(getter=isMidiSource) BOOL midiSource; // @dynamic midiSource;
@property(getter=isSmpteSource) BOOL smpteSource; // @dynamic smpteSource;
@property(getter=isMediaClockSource) BOOL mediaClockSource; // @dynamic mediaClockSource;
@property(getter=isControlSource) BOOL controlSource; // @dynamic controlSource;
@property(getter=isOtherSource) BOOL otherSource; // @dynamic otherSource;
@property(getter=isTalkerImplemented) BOOL talkerImplemented; // @dynamic talkerImplemented;
@property(getter=isEntityNotReady) BOOL entityNotReady; // @dynamic entityNotReady;
@property BOOL generalControllerIgnore; // @dynamic generalControllerIgnore;
@property(getter=isInterfaceIndexValid) BOOL interfaceIndexValid;
@property(getter=isIdentifyControlIndexValid) BOOL identifyControlIndexValid; // @dynamic identifyControlIndexValid;
@property(getter=isPersistentAcquireSupported) BOOL persistentAcquireSupported; // @dynamic persistentAcquireSupported;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired; // @dynamic authenticationRequired;
@property(getter=isAuthenticationSupported) BOOL authenticationSupported; // @dynamic authenticationSupported;
@property(getter=isGPTPSupported) BOOL gPTPSupported; // @dynamic gPTPSupported;
@property(getter=isClassBSupported) BOOL classBSupported; // @dynamic classBSupported;
@property(getter=isClassASupported) BOOL classASupported; // @dynamic classASupported;
@property(getter=isVendorUniqueSupported) BOOL vendorUniqueSupported; // @dynamic vendorUniqueSupported;
@property(getter=isAssociationIDValid) BOOL associationIDValid; // @dynamic associationIDValid;
@property(getter=isAssociationIDSupported) BOOL associationIDSupported; // @dynamic associationIDSupported;
@property(getter=isLegacyAVCSupported) BOOL legacyAVCSupported; // @dynamic legacyAVCSupported;
- (BOOL)aemSupported;
- (void)setAemSupported:(BOOL)arg1;
@property(getter=isAEMSupported, setter=setAEMSupported:) BOOL aemSupported; // @dynamic aemSupported;
@property(getter=isGatewayEntity) BOOL gatewayEntity; // @dynamic gatewayEntity;
@property(getter=isAddressAccessSupported) BOOL addressAccessSupported; // @dynamic addressAccessSupported;
- (BOOL)isEfuMode;
@property(getter=isEFUMode) BOOL efuMode; // @dynamic efuMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)localizedModelObjectName;
- (id)validChildrenDescriptorTypes;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

