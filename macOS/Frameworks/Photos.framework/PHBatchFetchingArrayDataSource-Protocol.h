//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PHPhotoLibrary;

@protocol PHBatchFetchingArrayDataSource <NSObject>
- (PHPhotoLibrary *)bfa_photoLibrary;
- (id <PHBatchFetchingArrayElement>)bfa_tombstoneObjectForOID:(id)arg1 uuid:(NSString *)arg2 propertyHint:(unsigned long long)arg3;
- (NSArray *)bfa_fetchedObjectsForOIDs:(NSArray *)arg1 objectClass:(Class)arg2;
- (NSArray *)bfa_fetchObjectsForOIDs:(NSArray *)arg1 propertyHint:(unsigned long long)arg2;
@end

