//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_givenName;
    NSString *_familyName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    NSPersonNameComponents *_phoneticRepresentation;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSPersonNameComponents *phoneticRepresentation; // @synthesize phoneticRepresentation=_phoneticRepresentation;
@property(copy) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(copy) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy) NSString *givenName; // @synthesize givenName=_givenName;
- (void)dealloc;
- (void)_freeIvars;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

