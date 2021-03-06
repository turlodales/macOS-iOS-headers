//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSBlockSentinelSignalContext-Protocol.h>

@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>
{
    BOOL _complete;
    BOOL _failed;
    id _context;
}

+ (id)failureContext;
+ (id)context;
- (void).cxx_destruct;
@property(nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) __weak id context; // @synthesize context=_context;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

