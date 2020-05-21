//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ABAddressBook, NSArray, NSString, PHXSource;

@interface ABSearchOperation : NSOperation
{
    PHXSource *_source;
    NSArray *_terms;
    NSString *_originalTerm;
    ABAddressBook *_addressBook;
    id <ABSearchOperationDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    int _phase;
    BOOL _shouldSearchLocal;
    BOOL _shouldSearchServer;
    BOOL _shouldReturnDistributionLists;
    BOOL _shouldReturnFullContactData;
    int _resultType;
    NSArray *_prefixFields;
    id <ABCNDirectoryResultBuilder> _resultBuilderPrototype;
}

+ (BOOL)_resultRecord:(id)arg1 matchesSearchOperation:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) id <ABCNDirectoryResultBuilder> resultBuilderPrototype; // @synthesize resultBuilderPrototype=_resultBuilderPrototype;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *prefixFields; // @synthesize prefixFields=_prefixFields;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL shouldReturnFullContactData; // @synthesize shouldReturnFullContactData=_shouldReturnFullContactData;
@property(nonatomic) BOOL shouldReturnDistributionLists; // @synthesize shouldReturnDistributionLists=_shouldReturnDistributionLists;
@property(nonatomic) BOOL shouldSearchServer; // @synthesize shouldSearchServer=_shouldSearchServer;
@property(nonatomic) BOOL shouldSearchLocal; // @synthesize shouldSearchLocal=_shouldSearchLocal;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(retain, nonatomic) id <ABSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *originalTerm; // @synthesize originalTerm=_originalTerm;
@property(copy, nonatomic) NSArray *terms; // @synthesize terms=_terms;
@property(retain, nonatomic) PHXSource *source; // @synthesize source=_source;
- (id)description;
- (void)reportRecords:(id)arg1;
- (id)searchMatches;
- (id)cachedMatches;
- (void)_doMain;
- (void)main;
- (id)init;

@end

