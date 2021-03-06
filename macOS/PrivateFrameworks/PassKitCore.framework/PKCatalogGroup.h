//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUbiquitous;
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToGroup:(id)arg1;
- (id)init;

@end

