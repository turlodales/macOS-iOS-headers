//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata
{
    NSNumber *_defaultValue;
    NSString *_falseDisplayName;
    NSString *_falseDisplayNameID;
    NSString *_trueDisplayName;
    NSString *_trueDisplayNameID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *trueDisplayNameID; // @synthesize trueDisplayNameID=_trueDisplayNameID;
@property(copy, nonatomic) NSString *trueDisplayName; // @synthesize trueDisplayName=_trueDisplayName;
@property(copy, nonatomic) NSString *falseDisplayNameID; // @synthesize falseDisplayNameID=_falseDisplayNameID;
@property(copy, nonatomic) NSString *falseDisplayName; // @synthesize falseDisplayName=_falseDisplayName;
@property(copy, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedFalseDisplayNameWithLocalizer:(id)arg1;
@property(readonly, copy) NSString *localizedFalseDisplayName;
- (id)localizedTrueDisplayNameWithLocalizer:(id)arg1;
@property(readonly, copy) NSString *localizedTrueDisplayName;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

