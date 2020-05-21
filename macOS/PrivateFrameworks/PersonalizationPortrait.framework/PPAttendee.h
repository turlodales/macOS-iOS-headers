//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCurrentUser;
    unsigned char _status;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_urlString;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char status; // @synthesize status=_status;
@property(readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqualToAttendee:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEKParticipant:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 urlString:(id)arg3 isCurrentUser:(BOOL)arg4 status:(unsigned char)arg5;

@end

