//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class FMFHandle, NSDate, NSSet, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestType;
    FMFHandle *_fromHandle;
    NSSet *_toHandles;
    NSDate *_endDate;
    NSString *_groupId;
    NSString *_requestId;
}

+ (BOOL)supportsSecureCoding;
+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
- (void).cxx_destruct;
@property(retain) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSSet *toHandles; // @synthesize toHandles=_toHandles;
@property(retain) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property long long requestType; // @synthesize requestType=_requestType;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;

@end

