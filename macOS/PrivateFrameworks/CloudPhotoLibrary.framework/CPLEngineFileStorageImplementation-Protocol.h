//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformImplementation.h"

@class CPLResourceIdentity, NSArray, NSData, NSURL;

@protocol CPLEngineFileStorageImplementation <CPLPlatformImplementation>
- (id <NSFastEnumeration>)fileEnumeratorIncludingPropertiesForKeys:(NSArray *)arg1 errorHandler:(BOOL (^)(CPLResourceIdentity *, NSError *))arg2;
- (BOOL)markForDeleteFileWithIdentity:(CPLResourceIdentity *)arg1 error:(id *)arg2;
- (BOOL)deleteFileWithIdentity:(CPLResourceIdentity *)arg1 includingOriginal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)discardAllRetainedFileURLsWithError:(id *)arg1;
- (BOOL)releaseFileURL:(NSURL *)arg1 error:(id *)arg2;
- (NSURL *)retainFileURLForIdentity:(CPLResourceIdentity *)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (void)checkFileSizeForIdentity:(CPLResourceIdentity *)arg1;
- (BOOL)hasFileWithIdentity:(CPLResourceIdentity *)arg1;
- (BOOL)storeUnretainedData:(NSData *)arg1 identity:(CPLResourceIdentity *)arg2 isOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)storeUnretainedFileAtURL:(NSURL *)arg1 identity:(CPLResourceIdentity *)arg2 isOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)storeData:(NSData *)arg1 identity:(CPLResourceIdentity *)arg2 isOriginal:(BOOL)arg3 needsCommit:(char *)arg4 onNewFile:(BOOL (^)(id *))arg5 error:(id *)arg6;
- (BOOL)storeFileAtURL:(NSURL *)arg1 identity:(CPLResourceIdentity *)arg2 isOriginal:(BOOL)arg3 needsCommit:(char *)arg4 onNewFile:(BOOL (^)(id *))arg5 error:(id *)arg6;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
@end

