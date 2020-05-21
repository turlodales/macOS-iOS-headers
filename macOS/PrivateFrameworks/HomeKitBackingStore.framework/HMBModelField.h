//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _encrypted;
    BOOL _excludeFromCloudStorage;
    BOOL _optional;
    BOOL _conformsToHMBModelNativeCKWrapper;
    Class _classObj;
    NSString *_externalRecordField;
    unsigned long long _loggingVisibility;
    id _defaultValue;
    HMFVersion *_readonlyVersion;
    HMFVersion *_unavailableVersion;
    CDUnknownBlockType _encodeBlock;
    CDUnknownBlockType _decodeBlock;
    CDUnknownBlockType _descriptionBlock;
}

+ (id)deprecatedField;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property(copy, nonatomic) CDUnknownBlockType decodeBlock; // @synthesize decodeBlock=_decodeBlock;
@property(copy, nonatomic) CDUnknownBlockType encodeBlock; // @synthesize encodeBlock=_encodeBlock;
@property(nonatomic) BOOL conformsToHMBModelNativeCKWrapper; // @synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper;
@property(copy, nonatomic) HMFVersion *unavailableVersion; // @synthesize unavailableVersion=_unavailableVersion;
@property(copy, nonatomic) HMFVersion *readonlyVersion; // @synthesize readonlyVersion=_readonlyVersion;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned long long loggingVisibility; // @synthesize loggingVisibility=_loggingVisibility;
@property(nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(nonatomic) BOOL excludeFromCloudStorage; // @synthesize excludeFromCloudStorage=_excludeFromCloudStorage;
@property(retain, nonatomic) NSString *externalRecordField; // @synthesize externalRecordField=_externalRecordField;
@property(nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionForEncodedQueryableValue:(id)arg1;
- (id)decodeQueryableValue:(id)arg1;
- (id)encodeQueryableValue:(id)arg1;
- (id)description;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end

