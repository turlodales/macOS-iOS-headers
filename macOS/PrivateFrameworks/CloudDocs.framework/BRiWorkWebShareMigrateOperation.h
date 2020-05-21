//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSOperationQueue, NSURL;

@interface BRiWorkWebShareMigrateOperation : BROperation
{
    NSURL *_url;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _shareMigrationCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareMigrationCompletionBlock; // @synthesize shareMigrationCompletionBlock=_shareMigrationCompletionBlock;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_copyShare;
- (void)_startSharingReadWrite:(BOOL)arg1;
- (void)_migrateShare;
- (id)initWithURL:(id)arg1;

@end

