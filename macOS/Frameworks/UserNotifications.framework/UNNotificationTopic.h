//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_displayName;
    unsigned long long _priority;
    NSString *_sortIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy) NSString *sortIdentifier; // @synthesize sortIdentifier=_sortIdentifier;
@property(readonly) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;

@end

