//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionTaskDelegatePrivate.h"

@class NSString;

@interface UnitTestSchemeUpgradeTaskDelegate : NSObject <NSURLSessionTaskDelegatePrivate>
{
}

- (BOOL)testPassed:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTestDisposition:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

