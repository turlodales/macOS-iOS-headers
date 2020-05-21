//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface ABACAccountType : NSObject <NSSecureCoding>
{
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)accountTypeMap;
+ (id)ABACAccountTypeFromACAccountType:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)addressBookAccountType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

