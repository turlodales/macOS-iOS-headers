//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator
{
    BOOL _closed;
    CKSQLiteStatement *_statement;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) CKSQLiteStatement *statement; // @synthesize statement=_statement;
- (void)close;
- (id)nextObject;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

