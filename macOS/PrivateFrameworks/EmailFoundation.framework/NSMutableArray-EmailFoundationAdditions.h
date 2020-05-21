//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface NSMutableArray (EmailFoundationAdditions)
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(BOOL)arg2;
- (void)ef_addOptionalObject:(id)arg1;
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(BOOL)arg4;
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(BOOL)arg3;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;
- (void)ef_reverseObjects;
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (BOOL)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (BOOL)ef_addObjectIfAbsent:(id)arg1;
@end

