//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@interface IMAPPersistenceBlockOperation : IMAPPersistenceTaskOperation
{
    BOOL _blockCompleted;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) BOOL blockCompleted; // @synthesize blockCompleted=_blockCompleted;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

