//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPMetadataPattern : NSObject
{
    struct __MDSimpleQueryEvaluator *_queryEval;
    NSString *_queryString;
}

- (void).cxx_destruct;
@property(readonly) NSString *queryString; // @synthesize queryString=_queryString;
- (void)dealloc;
- (BOOL)matches:(id)arg1;
- (id)mutableFilterResults:(id)arg1;
- (id)filterResults:(id)arg1;
- (id)initWithQuery:(id)arg1 isCoreSpotlight:(BOOL)arg2;
- (id)initWithQuery:(id)arg1;

@end

