//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface SPFinderStateInfo : NSObject <NSSecureCoding>
{
    BOOL _state;
    NSDate *_lastUpdated;
    NSDate *_lastPublishDate;
    NSDate *_lastScheduledPublishActivityDate;
    long long _activeCache;
}

+ (BOOL)canPublishAnonymously;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long activeCache; // @synthesize activeCache=_activeCache;
@property(copy, nonatomic) NSDate *lastScheduledPublishActivityDate; // @synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate;
@property(copy, nonatomic) NSDate *lastPublishDate; // @synthesize lastPublishDate=_lastPublishDate;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) BOOL state; // @synthesize state=_state;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(BOOL)arg1 lastUpdated:(id)arg2 lastPublishDate:(id)arg3 lastScheduledPublishActivityDate:(id)arg4 activeCache:(long long)arg5;

@end

