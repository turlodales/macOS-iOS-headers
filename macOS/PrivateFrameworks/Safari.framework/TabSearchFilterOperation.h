//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TabSearchFilterOperation : NSOperation
{
    CDUnknownBlockType _filterCompletionCallback;
    NSString *_filterText;
    NSArray *_tabInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(readonly, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterCompletionCallback; // @synthesize filterCompletionCallback=_filterCompletionCallback;
- (void)_completeOperationWithIndexes:(id)arg1;
- (void)main;
- (id)initWithTabInfoForFilteringTabs:(id)arg1 filterText:(id)arg2 completionCallback:(CDUnknownBlockType)arg3;

@end

