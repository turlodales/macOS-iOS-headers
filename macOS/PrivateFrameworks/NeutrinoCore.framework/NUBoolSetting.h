//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting
{
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (BOOL)isValid:(out id *)arg1;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;
@property(readonly) NSNumber *identityValue;
@property(readonly) NSNumber *defaultValue;

@end

