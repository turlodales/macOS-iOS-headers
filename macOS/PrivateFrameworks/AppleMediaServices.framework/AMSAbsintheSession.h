//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAbsintheSession : NSObject
{
    void *_sessionRef;
    NSString *_servKey;
}

+ (id)defaultSession;
- (void).cxx_destruct;
@property(retain) NSString *servKey; // @synthesize servKey=_servKey;
@property void *sessionRef; // @synthesize sessionRef=_sessionRef;
- (BOOL)_prepareContextWithBag:(id)arg1 error:(id *)arg2;
- (BOOL)verifyData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (BOOL)clearSession;
- (id)init;

@end

