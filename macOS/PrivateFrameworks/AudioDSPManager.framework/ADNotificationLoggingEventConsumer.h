//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADNotificationHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ADNotificationLoggingEventConsumer : NSObject <ADNotificationHandler>
{
    NSString *_topic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)handleEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

