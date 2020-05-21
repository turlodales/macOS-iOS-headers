//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_methodName;
    NSString *_bagKey;
    NSDictionary *_parameters;
    VSAuditToken *_auditToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

