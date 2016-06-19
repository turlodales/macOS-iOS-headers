//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHQuery.h>

@class RDFaceGroupsQuery;

@interface PHFaceGroupsQuery : PHQuery
{
    RDFaceGroupsQuery *_rdquery;
}

+ (id)propertyPathsFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)additionalChangePropertiesFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
- (void).cxx_destruct;
- (id)resolveModels;
- (BOOL)changedByModelChangeGroups:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFace:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)initWithPerson:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)initWithPerson:(id)arg1 options:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;
- (id)initWithFilter:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;

@end

