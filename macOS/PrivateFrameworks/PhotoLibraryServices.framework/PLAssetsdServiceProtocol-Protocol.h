//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAssetsdServiceCreating.h"

@class NSData, NSURL, PLDaemonJob;

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 bookmark:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2 withReply:(void (^)(NSError *, PLDaemonJobReply *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2;
@end

