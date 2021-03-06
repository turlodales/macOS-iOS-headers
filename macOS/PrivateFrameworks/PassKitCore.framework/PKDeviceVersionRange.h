//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_minimum;
    NSString *_maximum;
    NSArray *_models;
    PKDeviceVersionRange *_companion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKDeviceVersionRange *companion; // @synthesize companion=_companion;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSString *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) NSString *minimum; // @synthesize minimum=_minimum;
- (id)description;
- (BOOL)_matchesDeviceVersion:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToDeviceVersionRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end

