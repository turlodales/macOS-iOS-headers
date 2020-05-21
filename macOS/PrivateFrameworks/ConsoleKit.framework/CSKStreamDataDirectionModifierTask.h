//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKStreamTask.h>

@class CSKStreamData;

@interface CSKStreamDataDirectionModifierTask : CSKStreamTask
{
    CSKStreamData *_data;
    unsigned long long _newDirection;
    CDUnknownBlockType _completionHandler;
}

+ (id)name;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long newDirection; // @synthesize newDirection=_newDirection;
@property(readonly, nonatomic) __weak CSKStreamData *data; // @synthesize data=_data;
- (CDUnknownBlockType)handler;
- (id)initWithData:(id)arg1 direction:(unsigned long long)arg2;
- (id)init;

@end

