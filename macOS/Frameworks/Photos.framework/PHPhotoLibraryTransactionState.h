//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiTransactionContext, NSMutableDictionary;

@interface PHPhotoLibraryTransactionState : NSObject
{
    BOOL _transactionActive;
    NSMutableDictionary *_changeRequests;
    NSMutableDictionary *_objectsToBeDeleted;
    LiTransactionContext *_context;
}

@property(readonly, nonatomic, getter=isTransactionActive) BOOL transactionActive; // @synthesize transactionActive=_transactionActive;
@property(readonly, nonatomic) LiTransactionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableDictionary *objectsToBeDeleted; // @synthesize objectsToBeDeleted=_objectsToBeDeleted;
@property(readonly, nonatomic) NSMutableDictionary *changeRequests; // @synthesize changeRequests=_changeRequests;
- (void).cxx_destruct;
- (void)validateInTransaction;
- (void)endTransaction;
- (void)beginTransactionWithDatabase:(id)arg1;
- (id)init;

@end

