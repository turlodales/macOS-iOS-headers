//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stringRepresentation;
}

+ (id)encodedObjectID:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)decodedObjectID:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly) NSString *instanceID;
@property(readonly) NSString *classID;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClassID:(id)arg1 instanceID:(id)arg2;
- (id)initWithTokenID:(id)arg1;

@end

