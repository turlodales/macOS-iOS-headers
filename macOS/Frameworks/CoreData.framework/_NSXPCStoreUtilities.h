//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSXPCStoreUtilities : NSObject
{
}

+ (id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id *)arg6 error:(id *)arg7;
+ (id)_decodeBufferResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id *)arg6 error:(id *)arg7;
+ (id)newUserInfoFromException:(id)arg1;
+ (id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3;
+ (id)newSecureArchivedDataWithRootObject:(id)arg1;
+ (id)classesForSaveArchive;
+ (id)classesForErrorArchive;
+ (id)classesForFetchArchive;
+ (void)logMessage:(id)arg1 forComponent:(id)arg2;
+ (id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2;
+ (id)identifierForStore:(id)arg1;

@end

