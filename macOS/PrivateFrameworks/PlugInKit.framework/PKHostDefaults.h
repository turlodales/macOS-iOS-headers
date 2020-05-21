//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

@class NSObject<OS_dispatch_queue>, PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak PKHostPlugIn *plugin; // @synthesize plugin=_plugin;
- (void)registerDefaults:(id)arg1;
- (BOOL)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithPlugIn:(id)arg1;

@end

