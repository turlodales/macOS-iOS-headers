//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKStreamTask.h>

@class CSKStreamData;

@interface CSKStreamDataRemovalTask : CSKStreamTask
{
    unsigned long long _removalCount;
    CSKStreamData *_data;
    CDUnknownBlockType _completionHandler;
}

+ (id)name;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak CSKStreamData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long removalCount; // @synthesize removalCount=_removalCount;
- (CDUnknownBlockType)handler;
- (id)initWithData:(id)arg1 removalCount:(unsigned long long)arg2;
- (id)init;

@end

