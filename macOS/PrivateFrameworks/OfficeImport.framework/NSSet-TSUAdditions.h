//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSet.h"

@interface NSSet (TSUAdditions)
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (BOOL)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_onlyObject;
- (BOOL)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_sortedArray;
- (BOOL)tsu_containsObjectIdenticalTo:(id)arg1;
@end

