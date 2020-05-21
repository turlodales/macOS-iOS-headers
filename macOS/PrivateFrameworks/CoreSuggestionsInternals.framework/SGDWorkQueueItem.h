//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSSecureCoding>, NSString, SGDWorkQueueName;

@interface SGDWorkQueueItem : NSObject
{
    SGDWorkQueueName *_name;
    NSString *_filename;
    NSObject<NSSecureCoding> *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *object; // @synthesize object=_object;
- (id)description;
- (void)markAsFailed;
- (void)finish;
- (void)dealloc;
@property(readonly, nonatomic) NSString *queueId;
@property(readonly, nonatomic) unsigned long long fails;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3;

@end

