//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent
{
    NSString *_topic;
}

+ (id)incomingCloudPush:(id)arg1;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)initWithTopic:(id)arg1;

@end

