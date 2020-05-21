//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLRequest, NSURLSession, NSURLSessionConfiguration, NSURLSessionDataTask, NSURLSessionUploadTask;

@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property(readonly) __weak NSURLSession *_groupSession;
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration;
- (NSURLSessionUploadTask *)uploadTaskWithStreamedRequest:(NSURLRequest *)arg1;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1;
@end

