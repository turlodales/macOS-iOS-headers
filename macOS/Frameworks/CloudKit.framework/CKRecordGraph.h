//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface CKRecordGraph : NSObject
{
    NSMutableSet *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)arg1 withError:(id *)arg2;
@property(retain, nonatomic) NSArray *sortedRecords; // @synthesize sortedRecords=_sortedRecords;
@property(copy, nonatomic) NSMutableSet *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (id)description;
- (id)recordsByTopologicalSortWithError:(id *)arg1;
- (id)init;
- (BOOL)addRecords:(id)arg1 error:(id *)arg2;

@end

