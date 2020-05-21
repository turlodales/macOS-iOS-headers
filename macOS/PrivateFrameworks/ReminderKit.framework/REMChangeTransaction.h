//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, REMChangeToken, REMObjectID;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    NSArray *_changes;
    REMObjectID *_accountID;
    NSString *_storeID;
    NSString *_author;
    REMChangeToken *_token;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMChangeToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

