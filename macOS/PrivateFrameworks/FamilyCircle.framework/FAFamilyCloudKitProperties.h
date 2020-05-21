//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participantID;
@property(readonly, copy, nonatomic) NSString *zoneID;
@property(readonly, copy, nonatomic) NSString *shareID;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

