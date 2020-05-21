//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential, NSURLProtectionSpace, NSURLRequest, NSURLResponse, NSValue, __CFN_TaskMetrics, __CFN_TransactionMetrics;

@protocol NDBackgroundSessionClient <NSObject>
- (void)credStorage_setDefaultCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSURLCredential *))arg2;
- (void)credStorage_removeCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_allCredentialsWithReply:(void (^)(NSDictionary *))arg1;
- (void)credStorage_credentialsForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(void (^)(NSDictionary *, NSDictionary *))arg1;
- (void)backgroundSessionDidFinishAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundSessionDidStartAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 willDownloadToURL:(NSURL *)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2 reply:(void (^)(void))arg3;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(NSValue *)arg2 totalTimeRangesLoaded:(NSArray *)arg3 timeRangeExpectedToLoad:(NSValue *)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)openFileAtPath:(NSString *)arg1 mode:(int)arg2 withReply:(void (^)(NSFileHandle *))arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(NSURL *)arg2 reply:(void (^)(void))arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(NSError *)arg2 transactionMetrics:(__CFN_TransactionMetrics *)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(NSURLResponse *)arg2 reply:(void (^)(BOOL, NSDictionary *, NSURLRequest *))arg3;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(NSData *)arg2 withReply:(void (^)(void))arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(NSError *)arg2 taskMetrics:(__CFN_TaskMetrics *)arg3 info:(NSDictionary *)arg4 reply:(void (^)(void))arg5;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(BOOL)arg2 withReply:(void (^)(NSFileHandle *))arg3;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(NSURLResponse *)arg2 transactionMetrics:(__CFN_TransactionMetrics *)arg3 reply:(void (^)(long long))arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(NSURLResponse *)arg2 transactionMetrics:(__CFN_TransactionMetrics *)arg3;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(NSError *)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg2 reply:(void (^)(NSURLRequest *, NSFileHandle *))arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 withNewRequest:(NSURLRequest *)arg3 reply:(void (^)(NSURLRequest *))arg4;
- (void)backgroundTask:(unsigned long long)arg1 willBeginDelayedRequest:(NSURLRequest *)arg2 reply:(void (^)(long long, NSURLRequest *))arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 reply:(void (^)(long long, NSURLCredential *))arg3;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
@end

