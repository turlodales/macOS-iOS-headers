//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableGrid : NSObject
{
    NSMutableArray *mColumns;
}

- (void).cxx_destruct;
- (id)description;
- (id)addColumn;
- (id)columnAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (id)init;
- (void)flipColumnsRTL;

@end

