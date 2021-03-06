//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUModel.h>

@interface NUSetting : NUModel
{
}

+ (id)deserializeSettingsFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeAttributesFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
- (BOOL)serializeAttributesIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copy:(id)arg1;
- (BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (id)description;
@property(readonly, nonatomic) BOOL isRequired;
@property(readonly) id defaultValue;

@end

