//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTAutomationSupport/XCTMatchingElementIterator.h>

@class NSEnumerator, XCTElementFilteringTransformer;

__attribute__((visibility("hidden")))
@interface XCTFilteringTransformerIterator : XCTMatchingElementIterator
{
    NSEnumerator *_inputEnumerator;
    XCTElementFilteringTransformer *_filteringTransformer;
}

- (void).cxx_destruct;
@property(readonly) XCTElementFilteringTransformer *filteringTransformer; // @synthesize filteringTransformer=_filteringTransformer;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

@end

