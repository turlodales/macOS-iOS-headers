//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject
{
    int _row;
    int _parent;
    NSString *_detail;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) int parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) int row; // @synthesize row=_row;
- (id)initWithRow:(id)arg1;

@end

