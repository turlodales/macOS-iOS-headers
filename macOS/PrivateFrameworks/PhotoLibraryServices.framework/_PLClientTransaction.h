//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@class NSObject<OS_dispatch_semaphore>, NSSet, NSString;

@interface _PLClientTransaction : PLClientServerTransaction
{
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
    int _fileDescriptor;
    id _processAssertion;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;
    NSString *_changeScopesDescriptionSnapshot;
}

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;
- (void).cxx_destruct;
@property(copy) NSString *changeScopesDescriptionSnapshot; // @synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot;
@property(nonatomic) __weak NSObject<OS_dispatch_semaphore> *fdResourceSemaphore; // @synthesize fdResourceSemaphore=_fdResourceSemaphore;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id processAssertion; // @synthesize processAssertion=_processAssertion;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (id)description;
- (id)generateChangeScopesDescription;
- (void)abortTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)completeTransaction;
- (id)changeScopes;
- (BOOL)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)addChangeScopes:(id)arg1;
- (void)persistTransactionScopes:(id)arg1;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1;

@end

