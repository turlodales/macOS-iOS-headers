//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHQuery.h>

@class RDVersionsQuery;

@interface PHAssetsQuery : PHQuery
{
    RDVersionsQuery *_query;
}

+ (id)additionalChangePropertiesFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)propertyPathsFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
- (void).cxx_destruct;
- (id)resolveObjects;
- (BOOL)changedByModelChangeGroups:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaces:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initMovieWithMemory:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initRepresentativeWithMemory:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initCuratedWithMemory:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initWithMemory:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initWithMoment:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initWithAlbum:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;
- (id)initWithFilter:(id)arg1 objectClass:(Class)arg2 photoLibrary:(id)arg3 fetchOptions:(id)arg4;

@end

