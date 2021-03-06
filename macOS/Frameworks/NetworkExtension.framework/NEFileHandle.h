//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject
{
    BOOL _launchOwnerWhenReadable;
    NSFileHandle *_handle;
}

+ (id)fileHandleFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSFileHandle *handle; // @synthesize handle=_handle;
@property(readonly) BOOL launchOwnerWhenReadable; // @synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable;
@property(readonly) unsigned long long type;
@property(readonly) NSObject<OS_xpc_object> *dictionary;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2;
- (id)initFromDictionary:(id)arg1;

@end

