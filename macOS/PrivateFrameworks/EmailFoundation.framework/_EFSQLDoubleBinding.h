//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLDoubleBinding : EFSQLBinding
{
    double _doubleValue;
}

@property(readonly, nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;
- (id)initWithDouble:(double)arg1;

@end

